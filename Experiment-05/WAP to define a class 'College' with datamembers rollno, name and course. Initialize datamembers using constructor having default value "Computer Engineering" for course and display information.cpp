#include <iostream>
using namespace std;

class College {
  int rollno;
  string name, course;
  public:
    College() {
      rollno = 13;
      name = "Pallavi";
      course = "Computer Engineering";
      cout << name << ", roll no " << rollno << ", Course: " << course << endl;
    }
    College(int rn, string n, string c = "Computer Engineering") {
      rollno = rn;
      name = n;
      course = c;
      cout << name << ", roll no " << rollno << ", Course: " << course << endl;
    }
    College(College &nig) {
      rollno = nig.rollno;
      name = nig.name;
      course = nig.course;
      cout << name << ", roll no " << rollno << ", Course: " << course << endl;
    }
};

int main () {
  College c1;
  College c2(13, "Pallavi");
  College c3(13, "Pallavi", "Medicine");
  College c4(c3);
  return 0;
}
