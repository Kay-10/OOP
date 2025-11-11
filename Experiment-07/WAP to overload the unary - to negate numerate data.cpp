#include <iostream>
using namespace std;

class a {
  int a;
  public:
  void operator -() {
    a = -a;
  }
  void getData() {
    cout << "Enter Number: ";
    cin >> a;
  }
  void putData() {
    cout << "New value: " << a;
  }
}d;

int main () {
  d.getData();
  d = -d;
  d.putData();
  return 0;
}
