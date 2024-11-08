#include "Device.h"
#include "Energy.h"
#include "Camera.h"
#include <iostream>
#include <vector>
using namespace std;
class GUI {
	int id;
	int userId;

public:
	GUI();
	bool Display();
};

class User {
	int userId;
	string userName;
	string password;

public:	
	User();
	bool CreateUser(string userName, string password);
	bool ValidateLogin(string userName, string password);
	bool UpdateUser(string newUserName, string newPassword);
	bool DeleteUser();
};

class System {
	vector <Device> devices;
	Energy energyMgr; 
	Camera camera; 
	GUI* gui;
	User* user;

public:
	System();
	bool Initialize();
	bool Mornitor();
	bool Control();
	bool IsCriticalCondition();
};