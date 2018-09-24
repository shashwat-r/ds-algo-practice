#include<bits/stdc++.h>
using namespace std;

int my_lower_bound(const vector<int>& v, int val) {
	// returns nearest element not less than val.
	int first = 0, last = v.size();
	while (last > first) {
		int middle = first + (last - first) / 2;
		if (v[middle] < val) first = middle + 1;
		else last = middle;
	}
	return first;
}

int my_upper_bound(vector<int>& v, const int& val) {
	// returns nearest element greater than val.
	int first = 0, last = v.size();
	while (last > first) {
		int middle = first + (last - first) / 2;
		if (val < v[middle]) last = middle;
		else first = middle + 1;
	}
	return first;
}

void exp() {
	vector<int> v = {1,2,3,3,5,6,7,8,8,10,11,12,13,13,15,16,17,18,18,20,99};
	for (int i = 0; i < 2; i ++) cout << "   ";
	for (auto x : v) cout << setw(2) << x << " "; cout << endl;

	// for (int i = 0; i < v.size(); i ++) cout << my_lower_bound(v, v[i]) << " "; cout << endl;
	// for (auto it = v.begin(); it != v.end(); it++) cout << lower_bound(v.begin(), v.end(), (*it))-v.begin() << " "; cout << endl;
	int vs = v.size();
	// for (int i = -2; i < vs+5; i ++) {int x = my_lower_bound(v, i); cout << setw(2) << x << " ";} cout << endl;
	// for (int i = -2; i < vs+5; i ++) {int x = lower_bound(v.begin(), v.end()-1, i)-v.begin(); cout << setw(2) << x << " ";} cout << endl;
	for (int i = -2; i < vs+5; i ++) {int x = lower_bound(v.begin(), v.end()-1, i)-v.begin(); cout << setw(2) << v[x] << " ";} cout << endl;
	for (int i = -2; i < vs+5; i ++) {cout << setw(2) << i << " ";} cout << endl;
	for (int i = -2; i < vs+5; i ++) {int x = upper_bound(v.begin(), v.end()-1, i)-v.begin(); cout << setw(2) << v[x] << " ";} cout << endl;
	// for (int i = -2; i < vs+5; i ++) {int x = my_upper_bound(v, i); cout << setw(2) << x << " ";} cout << endl;
	// for (int i = -2; i < vs+5; i ++) {int x = upper_bound(v.begin(), v.end()-1, i)-v.begin(); cout << setw(2) << x << " ";} cout << endl;
	for (int i = 0; i < 10; i ++) cout << endl;
	// cout << my_lower_bound(v, -2) << endl;
	// cout << "kyu?" << endl;
	// for (int i = -2; i < v.size()+5; i ++) cout << lower_bound(v.begin(), v.end(), i)-v.begin() << " "; cout << endl;

	// for (int i = 0; i < v.size(); i ++) cout << my_upper_bound(v, v[i]) << " "; cout << endl;
	// for (auto it = v.begin(); it != v.end(); it++) cout << upper_bound(v.begin(), v.end(), (*it))-v.begin() << " "; cout << endl;
}

int main() {
	exp();
}