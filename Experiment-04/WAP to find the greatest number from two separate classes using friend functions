#include<iostream>
using namespace std;

class A;
class B {
  int b;
  public:
    void getData() {
      cout << "Enter second number: ";
      cin >> b;
    }
    friend string findGreater(A &a, B &b);
}n2;

class A {
  int a;
  public:
    void getData() {
      cout << "Enter first number: ";
      cin >> a;
    }
    friend string findGreater(A &a, B &b);
}n1;

string findGreater(A &a, B &b) {
  if (a.a == b.b) { return "Both numbers are equal."; }
  else if (a.a > b.b) { return "The first number is greater"; }
  else { return "The second number is greater"; }
}

int main () {
  n1.getData();
  n2.getData();
  cout << findGreater(n1, n2);
  return 0;
}
