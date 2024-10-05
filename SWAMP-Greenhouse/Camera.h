#pragma once
// Camera header file
#include <string>

class Camera {
	bool isRecording;
	bool motionDetected;
	int zoomLevel;
	std::string cloudStoragePath;
	int positionX;
	int positionY;

public:
	Camera();
	void viewLiveFeed();
	void recordAndSaveToCloud();
	void detectMotion();
	void alertUser();
	void zoomIn();
	void zoomOut();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
};