#include <iostream>
#include <string>
using namespace std;

class ILogin {
  protected:
    string Name, Password;
  public:
    virtual void getData() = 0; 
    virtual void putData() = 0;
};

class EmailLogin : protected ILogin {
  string Email;
  public:
    void getData() {
        cout << "\nEnter Details for Email Login:" << endl;
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Password: ";
        getline(cin, Password);
        cout << "Enter Email: ";
        getline(cin, Email);
    }
    void putData() {
        cout << "\n--- Email Login Details ---" << endl;
        cout << "Name: " << Name << endl;
        cout << "Password: " << Password << endl;
        cout << "Email: " << Email << endl;
    }
}emailUser;

class MembershipLogin : protected ILogin {
  int ID;
  public:
    void getData() {
        cout << "\nEnter Details for Membership Login:" << endl;
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Password: ";
        getline(cin, Password);
        cout << "Enter Membership ID: ";
        cin >> ID; 
        cin.ignore(256, '\n'); 
    }
    void putData() {
        cout << "\n--- Membership Login Details ---" << endl;
        cout << "Name: " << Name << endl;
        cout << "Password: " << Password << endl;
        cout << "Membership ID: " << ID << endl;
    }
}memberUser;

int main() {
    emailUser.getData();
    memberUser.getData();
    cout << "\n===================================";
    emailUser.putData();
    memberUser.putData();
    return 0;
}
