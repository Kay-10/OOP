#include <iostream>
using namespace std;

class Student {
  string name;
  float percentage;
  public:
    Student() {
      name = "John Doe";
      percentage = 97.4;
      cout << "Name: " << name << ", Percentage: " << percentage << "%" << endl;
    }
    Student(string n, float p) {
      name = n;
      percentage = p;
      cout << "Name: " << name << ", Percentage: " << percentage << "%" << endl;
    }
    Student(Student &s) {
      name = s.name;
      percentage = s.percentage;
      cout << "Name: " << name << ", Percentage: " << percentage << "%" << endl;
    }
};

int main () {
  Student S1;
  Student S2("Dohn Joe", 79.4);
  Student S3(S1);
  return 0;
}
