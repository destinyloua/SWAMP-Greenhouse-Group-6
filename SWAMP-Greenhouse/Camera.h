#pragma once
// Camera header file
#include <string>
#include <list>

class Camera {
private:
	bool isRecording;
	bool motionDetected;
	int zoomLevel;
	std::string simulatedImagePath;
	std::string position;
public:
	Camera();
	Camera(std::string simulatedImagePath = "");
	~Camera();
	using Image = std::string; // Placeholder for Image type, replace with appropriate image handling type
	Image viewLiveFeed();
	void startRecording();
	void stopRecording();
	std::string detectMotion();
	void zoom(std::string direction);
	void moveCamera(std::string direction);
	std::list<std::string> readSimulatedData(std::string filePath);
	void sendToHMI(std::string data);
};
