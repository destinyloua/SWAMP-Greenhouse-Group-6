#pragma once
// Humidity header file
#include <string>
#include <vector>

class HumiditySensor {
private:
    std::string dataFilePath;
    float humidityLevel;
    float calibrationOffset;
    std::vector<float> humidityLog;
public:
    HumiditySensor();
    HumiditySensor(std::string dataFilePath = "");
    ~HumiditySensor();
    float monitorHumidity();
    std::string alertOnHumidityChange();
    std::vector<float> readSimulatedData(std::string filePath);
    void sendToHMI(std::string data);
    void logHumidity(float humidity);
    std::string checkHumidityRange(float humidity);
    void calibrate();
    std::string generateHumidityLog();
};
