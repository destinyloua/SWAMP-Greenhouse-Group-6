#define _CRT_SECURE_NO_WARNINGS
// Camera.h implementation
#include "Camera.h"
#include <fstream>
#include <iostream>

Camera::Camera() {}

Camera::Camera(std::string simulatedImagePath)
    : simulatedImagePath(simulatedImagePath), zoomLevel(1), position("center") {}

Camera::~Camera() {}

Camera::Image Camera::viewLiveFeed() {
    Image feedImage;
    // Logic to retrieve live feed image
    return feedImage;
}

void Camera::startRecording() {
    // Logic to start recording
}

void Camera::stopRecording() {
    // Logic to stop recording
}

std::string Camera::detectMotion() {
    std::string alertMessage;
    // Logic to detect motion
    return alertMessage;
}

void Camera::zoom(std::string direction) {
    if (direction == "in") {
        // Logic to zoom in
    }
    else if (direction == "out") {
        // Logic to zoom out
    }
}

void Camera::moveCamera(std::string direction) {
    if (direction == "left") {
        // Logic to move camera left
    }
    else if (direction == "right") {
        // Logic to move camera right
    }
    else if (direction == "up") {
        // Logic to move camera up
    }
    else if (direction == "down") {
        // Logic to move camera down
    }
}

std::list<std::string> Camera::readSimulatedData(std::string filePath) {
    std::list<std::string> data;
    std::ifstream file(filePath);
    std::string value;
    while (std::getline(file, value)) {
        data.push_back(value);
    }
    file.close();
    return data;
}

void Camera::sendToHMI(std::string data) {
    // Logic to send data to HMI/SCADA module
}
