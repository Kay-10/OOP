#include <iostream>
using namespace std;

class num {
  int n;
  public:
    num() {
      n = 13;
      cout << "The number is " << n << endl;
    }
    num(int num) {
      n = num;
      cout << "The number is " << n << endl;
    }
    num(num &s) {
      n = s.n;
      cout << "The number is " << n << endl;
    }
};

int main() {
  num n1;
  num n2(15);
  num n3(n1);
  return 0;
}
