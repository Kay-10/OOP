#include <iostream>
using namespace std;

class Vehicle {
  protected:
    string brand, model;
};

class Car: protected Vehicle {
  protected:
    string type;
};

class electricCar: protected Car {
  int batteryCapacity;
  public:
    void getData() {
      cout << "Enter Brand: ";
      getline(cin, brand);
      cout << "Enter Model: ";
      getline(cin, model);
      cout << "Enter Type: ";
      getline(cin, type);
      cout << "Enter battery capacity (kWh): ";
      cin >> batteryCapacity;
      cin.ignore(256, '\n');
    }
    void putData() {
      cout << brand << " " << model << ", Type: " << type << ", Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
}s;

int main () {
  s.getData();
  s.putData();
  return 0;
}
