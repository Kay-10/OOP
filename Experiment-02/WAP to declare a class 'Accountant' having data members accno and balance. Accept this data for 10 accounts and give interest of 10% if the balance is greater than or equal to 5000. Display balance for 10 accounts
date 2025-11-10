#include <iostream>
using namespace std;
class Account {
    private:
    double balance;
    public:
    long long int acc_no;
    void getdata() {
        cout << "Enter Account No.: ";
        cin >> acc_no;
        cout << "Enter balance of account no. " << acc_no << ": ";
        cin >> balance;
    }
    void interest() {
        if (balance >= 5000) {
            balance += (balance * 10 * 1)/100;
            }
    }
    void showdata() {
        cout << "Account No,: " << acc_no << ", Balance: " << balance << endl;
    }
}acc[10];

int main() {
    for (int i = 0; i < 10; i++) {
        acc[i].getdata();
    }
    
    for (int i = 0; i < 10; i++) {
        acc[i].interest();
        acc[i].showdata();
    }
    return 0;
}
