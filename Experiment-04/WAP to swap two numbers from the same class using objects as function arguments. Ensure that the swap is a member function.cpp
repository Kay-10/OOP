#include <iostream>
using namespace std;

 class number {
    int num1, num2;
    public:
    void getData() {
        cout << "Enter First Number: ";
        cin >> num1;
        cout << "Enter Second Number: ";
        cin >> num2;
    }

    void putData() {
        cout << "The First Number is " << num1 << endl;
        cout << "The Second Number is " << num2 << endl;
    } 

    void swapData(number &num) {
        int temp = num.num1;
        num.num1 = num.num2;
        num.num2 = temp; 
        cout << "During swapping, the First Number is " << num.num1 << " and the Second Number is " << num.num2 << endl;
    }
};

int main () {
    number num;
    num.getData();
    cout << "Before Swapping: " << endl;
    num.putData();
    num.swapData(num);
    cout << "After Swapping: " << endl;
    num.putData();
    return 0;
}
