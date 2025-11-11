#include<iostream>
using namespace std;

class a {
  string x;
  public:
    void getData() {
      cout << "Enter string: ";
      getline(cin, x);
    }

    string operator +(a &x) { return this->x + a.x; }
}a1, a2;

int main () {
  a1.getData();
  a2.getData();
  cout << "a1 + a2 = " << a1+a2;
  return 0;
}
