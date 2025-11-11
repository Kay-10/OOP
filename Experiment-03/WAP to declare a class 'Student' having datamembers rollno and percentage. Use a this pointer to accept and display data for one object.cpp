#include<iostream>
using namespace std;

class Student {
  int rollno;
  float percentage;
  public:
    void getData() {
      cout << "Enter roll no.: ";
      cin >> rollno;
      cout << "Enter percentage: ";
      getline(cin, this->percentage);
    }

    void putData() {
      this->getData();
      cout << "Roll No.: " << rollno << ", Percentage: " << percentage << "%" << endl;
    }
}s;

int main() {
  s.putData();
  return 0;
}
