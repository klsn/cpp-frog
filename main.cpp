#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	for (int i=0;i<n;i++) cin >> h.at(i);
	for (int i=0;i<n;i++) cout << h.at(i) << endl;
}
