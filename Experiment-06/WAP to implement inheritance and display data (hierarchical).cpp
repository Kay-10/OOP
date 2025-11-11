#include <iostream>
using namespace std;

class Employee {
  protected:
    int empid;
    string name;
};

class Developer: protected Employee {
  string language;
  public:
    void getData() {
      cout << "Enter Employee ID: ";
      cin >> empid;
      cin.ignore(256, '\n');
      cout << "Enter Name: ";
      getline(cin, name);
      cout << "Enter programming language: ";
      getline(cin, language);
    }
    void putData() {
      cout << empid << ", Name: " << name << ", programming language: " << language << endl;
    }
}d;

class Manager: protected Employee {
  string department;
  public:
    void getData() {
      cout << "Enter Employee ID: ";
      cin >> empid;
      cin.ignore(256, '\n');
      cout << "Enter Name: ";
      getline(cin, name);
      cout << "Enter managing department: ";
      getline(cin, department);
    }
    void putData() {
      cout << empid << ", Name: " << name << ", oversees " << department << endl;
    }
}m;

int main () {
  d.getData();
  d.putData();
  m.getData();
  m.putData();
  return 0;
}
