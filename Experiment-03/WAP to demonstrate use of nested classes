#include <iostream>
using namespace std;

class Enclosing {
    int n = 13;
    public:
      void putDataOuter() {
        cout << "Calling from the enclosing class, n = " << n << endl;
      }
      class Nested {
        int n = 37;
        public:
          void putDataInner() {
            cout << "Calling from the nested class, n = " << n << endl;
          }
      };
};

int main() {
  Enclosing e;
  Enclosing::Nested n;
  e.putDataOuter();
  n.putDataInner();
  return 0;
}
