#include<iostream>
using namespace std;

class a {
  int a;
  public:
    void getData() {
      cout << "Enter a Number: ";
      cin >> a;
    }

    void putData() {
      cout << "New Value: " << a;
    }

    friend void operator ++(a &a);
    friend void operator++(a &a, int);
}e1;

void operator ++(a &a) { ++a.a; }
void operator ++(a &a, int) { a.a++; }

int main () {
  e1.getData();
  ++e1;
  e1.putData();
  e1++;
  e1.putData();
  return 0;
}
