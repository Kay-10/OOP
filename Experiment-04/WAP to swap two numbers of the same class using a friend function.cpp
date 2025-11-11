#include <iostream>
using namespace std;

class Num {
  int a, b;
  public:
    void getData() {
      cout << "Enter first number: ";
      cin >> a;
      cout << "Enter second number: ";
      cin >> b;
    }
    void putData() {
      cout << "The First Number is " << a << endl;
      cout << "The Second Number is " << b << endl;
    }
    friend void swap(Num &n);
}n;

void swap(Num &n) {
  int temp = n.a;
  n.a = n.b;
  n.b = temp;
}

int main() {
  n.getData();
  n.putData();
  cout << "\nSwapping numbers...\n\n";
  swap(n);
  n.putData();
  return 0;
}
