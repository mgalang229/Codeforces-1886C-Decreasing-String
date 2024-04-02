#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	string s;
	ll pos;
	cin >> s >> pos;
	--pos;
	int cur_len = s.size();
	vector<char> st;
	bool ok = pos < cur_len;
	s += '$'; // less than 'a'
	for (char& c : s) {
		while (!ok && st.size() > 0 && st.back() > c) {
			pos -= cur_len;
			--cur_len;
			st.pop_back();
			if (pos < cur_len) {
				ok = true;
			}
		}
		st.push_back(c);
	}
	cout << st[pos];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
