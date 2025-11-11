#include <iostream>
#include <string>
using namespace std;
class Staff {
    private:
    string name, post;
    public:
    void getdata() {
        cout << "Enter Staff Name: ";
        getline(cin, name);
        cout << "Enter Post: ";
        getline(cin, post);
    }
    void showdata() {
        if (post == "Head of Department"|| post == "HOD"|| post == "Department Head"||post == "Head of Dept.") {
            cout << name << ", Head of Dept." << endl;
        }
    }
}st[5];

int main() {
    for (int i = 0; i < 5; i++) {
        st[i].getdata();
    }
    cout << "Faculty Post: " << endl;
    for (int i = 0; i < 5; i++) {
        st[i].showdata();
    }
    return 0;
}
