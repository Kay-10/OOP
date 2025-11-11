#include <iostream>
using namespace std;

class Book {
  string bname, bid;
  public:
      float bprice;
      void getData() {
        cout << "Enter name ";
        getline(cin, bname); 
        cout << "Enter ID: ";
        cin >> bid;
        cout << "Enter price: ";
        cin >> bprice;
        cin.ignore(256, '\n');
      }
      void putData() {
        cout << "The book having greater price is: \n" << "ID: " << bid << " , " << bname << ", Price: " << bprice;
      }
}b1, b2;

int main () {
  b1.getData();
  b2.getData();
  (b2.bprice > b1.bprice) ? b2.putData() : b1.putData();
  return 0;
}
