#include "Laptop.h"
//#include "SmartPhone.h"
#include "SmartDevice.h"
#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int main() {
    char db_laptop[100] = "db_laptop.txt";
    //Laptop listLaptop[100];
	Laptop a("Iphone 14", "Apple", "Blue", "40.000.000vnd","RTX 3090ti","2kg");
    cout << a;
    //a.Show();
    //readFILE(listLaptop, db_laptop);
    //listLaptop[0].Show();
}
