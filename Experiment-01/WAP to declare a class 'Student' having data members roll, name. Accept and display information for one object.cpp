#include <iostream>
using namespace std;

class Student { 
  int roll;
  string name;
  public:
    void getData() {
      cout << "Enter name: ";
      getline(cin, name);
      cout << "Enter roll no.: ";
      cin >> roll;
    }
    void putData() {
      cout << name << ", Roll no " << roll;
    }
}s;

int main () {
  s.getData();
  s.putData();
  return 0;
}
