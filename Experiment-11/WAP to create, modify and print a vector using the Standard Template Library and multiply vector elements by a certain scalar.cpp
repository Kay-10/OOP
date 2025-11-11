#include<iostream>
#include<vector>
using namespace std;

void prong(vector<int> vec) {
	int i;
	for(i = 0; i < vec.size(); i++) {
		if(i == 0) {
			cout << "(" << vec[i];
		}
		else if (i == vec.size() - 1) {
			cout << "," << vec[i] << ")" << endl;
		}
		else {
			cout << "," << vec[i];
		}
	}
	return;
}
int main () {
	vector<int>v(10);
	int i;
	cout << "Created Vector: ";
	prong(v);
	for(i = 0; i < v.size(); i++) {
		v[i] = (i+1)*10;
	}
	cout << "Added Elements: ";
	prong(v);
	for(i = 0; i < 4; i++) {
		v.push_back((11+i)*10);
	}
	cout << "Modified Vector: ";
	prong(v);
	
	for(auto it = v.begin(); it != v.end(); it++) {
		*it *= 21;
	}
	cout << "Multiplied elements by scalar: ";
	prong(v);
	
	return 0;
}
