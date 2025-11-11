#include <iostream>
using namespace std;

template <class T> T arrSum (T arr[], int length) {
  int i;
  T sum = 0;
  for(i = 0; i < length; i++) {
    sum += arr[i];
  }
  return sum;
}

int main () {
  int intArr[10] = {14,16,17,43,31,14,16,38,58,68};
  float floatArr[10] = {12.6,1.8,47.8,43.7,57.2,41.9,99.6,86.1,103.2,67};
  double doubleArr[10] = {1,2,3,4,5,6,7,8,1,1};

  cout << "Sum of intarr: " << arrSum(intArr, 10) << endl;
  cout << "Sum of floatarr: " << arrSum(floatArr, 10) << endl;
  cout << "Sum of doublearr: " << arrSum(doubleArr, 10) << endl;
  return 0;
}
