#include "SmartDevice.h"
#include <iostream>
#include <string.h>
using namespace std;
class Laptop :public SmartDevice {
private:
	string card;
	string weight;
public:
	Laptop(string name, string brand, string color, string price, string card, string weight);
	void Show();
};