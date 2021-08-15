#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	for (int i=0;i<n;i++) cin >> h.at(i);
	int inf = 1 << 30;
	vector<int> cost(n, inf);
	cost.at(0) = 0;
	cost.at(1) = abs(h.at(0) - h.at(1));
	for (int i=2; i<n; i++) {
		cost.at(i) = min(cost.at(i-1) + abs(h.at(i) - h.at(i-1)), cost.at(i-2) +abs(h.at(i) - h.at(i-2)));
	}
	cout << cost.at(n-1) << endl;
}
