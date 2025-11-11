#include<iostream>
using namespace std;

class Person {
  protected:
    string name;
    int age;
};

class Student:protected Person {
  int rollno;
  public:
    void putData() {
      cout << name << ", " << age << " years old, " << "Roll no. " << rollno;
    }
    void getData() {
      cout << "Enter name: ";
      cin >> name;
      cout << "Enter age: ";
      cin >> age;
      cout << "Enter Roll No.: ";
      cin >> rollno;
    }
}s;

int main () {
  s.getData();
  s.putData();
  return 0;
}
