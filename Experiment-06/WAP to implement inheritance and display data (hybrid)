#include <iostream>
using namespace std;

class Person {
  protected:
    string name;
    int age;
};

class Student:protected Person {};

class Sport {
  protected:
    int score;
};

class Academic:protected Student {
  int marks;
  public:
    void getData() {
      cout << "Enter Age: ";
      cin >> age;
      cout << "Enter Marks: ";
      cin >> marks;
      cin.ignore(256, '\n');
      cout << "Enter Name: ";
      getline(cin, name);
    }

    void putData() {
      cout << "Student Details:\n" << endl;
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Academic Record: " << endl;
      cout << "Marks: " << marks << endl;
    }

}a;

class Result:protected Student, protected Sport {
  public:
    void getData() {
      cout << "Enter Age: ";
      cin >> age;
      cout << "Enter Score: ";
      cin >> score;
      cin.ignore(256, '\n');
      cout << "Enter Name: ";
      getline(cin, name);
    }

    void putData() {
      cout << "Student Details:\n" << endl;
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Sports Record: " << endl;
      cout << "Score: " << score << endl;
    }

}s;

int main () {
  a.getData();
  s.getData();
  a.putData();
  s.putData();
  return 0;
}
