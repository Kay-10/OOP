#include <iostream>
using namespace std;

class CollegeStudent {
  protected:
    int studentid, collegecode;
};

class Test: protected virtual CollegeStudent {
  protected:
    int percentage;
};

class Sport: virtual protected CollegeStudent {
  protected:
    string grade;
};

class Result: protected Test, protected Sport {
  public:
    void getData() {
      cout << "Enter Student ID: ";
      cin >> studentid;
      cout << "Enter College Code: ";
      cin >> collegecode;
      cout << "Enter Test Percentage: ";
      cin >> percentage;
      cout << "Enter Sport Grade: ";
      cin >> grade;
    }
    void putData() {
      cout << "Student Details: " << endl;
      cout << "Id: " << studentid << endl;
      cout << "College: " << collegecode << endl;
      cout << "Percentage: " << percentage << endl;
      cout << "Grade: " << grade << endl;
    }
}r;

int main () {
  r.getData();
  r.putData();
  return 0;
}
