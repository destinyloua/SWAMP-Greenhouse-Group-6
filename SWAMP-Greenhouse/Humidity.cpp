#define _CRT_SECURE_NO_WARNINGS
// Humidity.h implementation
#include "Humidity.h"
#include <iostream>
#include <fstream>
#include <sstream>

HumiditySensor::HumiditySensor() {}

HumiditySensor::HumiditySensor(std::string dataFilePath)
    : dataFilePath(dataFilePath), humidityLevel(0.0), calibrationOffset(0.0) {}

HumiditySensor::~HumiditySensor() {}

float HumiditySensor::monitorHumidity() {
    return humidityLevel + calibrationOffset;
}

std::string HumiditySensor::alertOnHumidityChange() {
    if (humidityLevel < 50.0) {
        return "Alert: Humidity level out of range! Too low!";
    }
    else if (humidityLevel > 80.0) {
        return "Alert: Humidity level out of range! Too high!";
    }
    return "Humidity level within range.";
}

std::vector<float> HumiditySensor::readSimulatedData(std::string filePath) {
    std::vector<float> data;
    std::ifstream file(filePath);
    float value;
    while (file >> value) {
        data.push_back(value);
    }
    file.close();
    return data;
}

void HumiditySensor::sendToHMI(std::string data) {
    // Logic to send data to HMI/SCADA module
}

void HumiditySensor::logHumidity(float humidity) {
    humidityLog.push_back(humidity);
}

std::string HumiditySensor::checkHumidityRange(float humidity) {
    if (humidity < 50.0 || humidity > 80.0) {
        return "Humidity out of range!";
    }
    return "Humidity within range.";
}

void HumiditySensor::calibrate() {
    std::vector<float> referenceValues = readSimulatedData(dataFilePath);
    float referenceAverage = 0.0;
    for (float value : referenceValues) {
        referenceAverage += value;
    }
    referenceAverage /= referenceValues.size();

    calibrationOffset = referenceAverage - humidityLevel;
}

std::string HumiditySensor::generateHumidityLog() {
    std::ostringstream log;
    log << "Humidity Log:\n";
    for (float humidity : humidityLog) {
        log << humidity << "\n";
    }
    return log.str();
}
