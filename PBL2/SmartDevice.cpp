#include "SmartDevice.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
SmartDevice::SmartDevice() {

}
SmartDevice::SmartDevice(string name, string brand, string color, string price) {
	this->name = name;
	this->brand = brand;
	this->color = color;
	this->price = price;
}
istream& operator >> (istream& in, SmartDevice& tmp) {
	cout << "Enter the device name:"; getline(in, tmp.name);
	cout << "Enter the device brand:"; getline(in, tmp.brand);
	cout << "Enter the device color:"; getline(in, tmp.color);
	cout << "Enter the device price:"; getline(in, tmp.price);
	return in;
}
ostream& operator << (ostream& out, SmartDevice tmp) {
	out << tmp.name << endl << tmp.brand << endl << tmp.color << endl << tmp.price << endl;
	return out;
}

void SmartDevice::setName(string name) {
	this->name = name;
}
string SmartDevice::getName() {
	return name;
}
void SmartDevice::setBrand(string brand) {
	this->brand = brand;
}
string	SmartDevice::getBrand() {
	return brand;
}
void SmartDevice::setColor(string color) {
	this->color = color;
}
string SmartDevice::getColor() {
	return color;
}
void SmartDevice::setPrice(string Price) {
	this->price = price;
}
string SmartDevice::getPrice() {
	return price;
}

void SmartDevice::Show() {
	cout << "Name :" << name << endl;
	cout << "Brand : " << brand << endl;
	cout << "Color : " << color << endl;
	cout << "Price : " << price << endl;
};