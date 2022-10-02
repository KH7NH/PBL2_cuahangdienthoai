#include "Laptop.h"
#include "SmartPhone.h"
#include "SmartDevice.h"
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	SmartDevice a("Iphone 14", "Apple", "Blue", "40.000.000vnd");
	cout << a;
}