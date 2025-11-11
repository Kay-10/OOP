#include<iostream>
using namespace std;

class c {
  public:
    void sum(int arr[], int size) {
      int i, sum = 0;
      for(i = 0; i < size; i++) {
        sum+= arr[i];
      }
      cout << "The sum is " << sum;
    }

    void sum(float arr[], int size) {
      int i;
      float sum = 0;
      for(i = 0; i < size; i++) {
        sum+=arr[i];
      }
      cout << "The sum is " << sum;
    }
}c1;

int main () {
  int arr1 = {1,2,3,4,5,6,7,8,9,10};
  float arr2 = {13.7, 12.6, 17.9, 19.8, 15.5};
  c1.sum(arr1,10);
  c1.sum(arr2,5);
  return 0;
}
