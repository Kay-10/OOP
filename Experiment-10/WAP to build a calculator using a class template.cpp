#include <iostream>
using namespace std;

template <class T> class c {
  T n1, n2;
  public:
    c (T x, T y) { 
      n1 = x;
      n2 = y;
    }

    void calc() {
      cout << "Sum = " << n1+n2 << endl;
      cout << "Difference = " << n1-n2 << endl;
      cout << "Product = " << n1*n2 << endl;
      cout << "Quotient = " << n1/n2 << endl;
    }
};

int main () {
  c o(12, 17);
  o.calc();
  return 0;
}
