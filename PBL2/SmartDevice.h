#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class SmartDevice {
public:
	string name;
	string brand;
	string color;
	string price;
	string screen;
	/*string camera;
	string OS;
	string CPU;
	string RAM;
	string ROM;
	string battery;*/
public:
	SmartDevice();
	SmartDevice(string, string, string, string);
	friend istream& operator >> (istream& in, SmartDevice& sv);
	friend ostream& operator << (ostream& out, SmartDevice a);
	void setName(string name);
	string getName();
	void setBrand(string brand);
	string getBrand();
	void setColor(string color);
	string getColor();
	void setPrice(string Price);
	string getPrice();
};