#include <iostream>
using namespace std;

class B;
class A {
  int x;
  public:
    void getData() {
      cout << "Enter first number: ";
      cin >> x;
    }
    void putData() {
      cout << "The first number is " << x << endl;
    }
    friend void swap(A &a, B &b);
}n1;
class B {
  int x;
  public:
    void getData() {
      cout << "Enter second number: ";
      cin >> x;
    }
    void putData() {
      cout << "The second number is " << x << endl;
    }
    friend void swap(A &a, B &b);
}n2;

void swap(A &a, B &b) {
  int temp = a.x;
  a.x = b.x;
  b.x = temp;
}

int main() {
  n1.getData();
  n2.getData();
  n1.putData();
  n2.putData();
  cout << "\nSwapping Numbers...\n\n";
  swap(n1, n2);
  n1.putData();
  n2.putData();
  return 0;
}
