#include<iostream>
using namespace std;

class Book {
  int price;
  string book_title, author_name;
  public:
    void getData() {
      cout << "Enter book name: ";
      getline(cin, book_title);
      cout << "Enter author name: ";
      getline(cin, author_name);
      cout << "Enter price: ";
      cin >> price;
    }
    void putData() {
      cout << book_title << ", by " << author_name << ". Price: " << price;
    }
}b1;

int main () {
  Book *bp;
  bp = &b1;
  bp->getData();
  bp->putData();
  return 0;
}
