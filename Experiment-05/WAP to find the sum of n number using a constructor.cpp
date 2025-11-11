#include<iostream>
using namespace std;

class w {
  int n;
  public:
    w() {
      int i, sum = 0;
      n = 10;
      for (i = 0; i < n; i++) { sum+= i; }
    }

    w(int num) {
      int i, sum = 0;
      n = num;
      for (i = 0; i < num; i++) { sum+= i; }
    }

    w(w &x) {
      int i, sum = 0;
      n = x.n;
      for (i = 0; i < n; i++) { sum+= i; }
    }
};

int main () {
  w obj1;
  w obj2;
  w obj3(obj1);
  return 0;
}
