#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct Item {
    int itemCode;
    int qty;
    string name;
    float cost;
};
int main() {
    vector<Item> items;
    int n;
    cout << "Enter item no: ";
    cin >> n;
    cout << "Enter item list: " << endl;
    for (int i = 0; i < n; i++) {
        Item a;
        cout << "Item " << i + 1 << ":";
        cout << "Item Code: ";
        cin >> a.itemCode;
        cout << "Item Name: ";
        cin >> a.name;
        cout << "Item Qty: ";
        cin >> a.qty;
        cout << "Item Cost: ";
        cin >> a.cost;
        items.push_back(a);
    }
    sort(items.begin(), items.end(), [](Item a, Item b) {
        return a.name > b.name; 
    });
    cout << "Items sorted by name: \n";
    for (int i = 0; i < items.size(); i++) {
        cout << items[i].itemCode << "\t" << items[i].name << "\t" << items[i].qty << "\t" << items[i].cost << endl;
    }
    int code;
    cout << "\n Enter item code: ";
    cin >> code;
    auto found = find_if(items.begin(), items.end(), [code](Item item) {
        return item.itemCode == code;
    });
    if (found != items.end()) {
        cout << "\n Item found: "
             << found->itemCode << "\t"
             << found->name << "\t"
             << found->qty << "\t"
             << found->cost << endl;
    } else {
        cout << "Item not found." << endl;
    }
    return 0;
}
