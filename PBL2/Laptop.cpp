#include "SmartDevice.h"
#include "Laptop.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

Laptop::Laptop(string name, string brand, string color, string price, string card, string weight){
	this->name = name;
	this->brand = brand;
	this->color = color;
	this->price = price;
	this->card = card;
	this->weight = weight;
}

void Laptop::Show() {
	SmartDevice::Show();
	cout << "Card :" << card << endl;
	cout << "Weight : " << weight << endl;
};
