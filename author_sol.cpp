#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> even, odd;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x % 2 == 0) {
				even.push_back(x);
			} else {
				odd.push_back(x);
			}
		}
		// last bit:
		// even numbers = 0
		// odd numbers = 1
		// to form the correct sequence, all the even numbers must be printed first
		// before all the odd numbers (this will create a minimum ugliness value since
		// in the first half, there will be no increase since all even numbers have 0
		// on their last bit that's why no consecutive 1s will be formed)
		// also, the (even, odd, even, odd, ...) pattern will not work even though (even, odd)
		// pair does not connect together but (odd, even) pair might form consecutive 1s
		for (int i = 0; i < (int) even.size(); i++) {
			cout << even[i] << " ";
		}
		for (int i = 0; i < (int) odd.size(); i++) {
			cout << odd[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
