#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 

const int mxN = 1e5;
char s[mxN];

void decode() {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	int r = 0, b = 0, g = 0;
	for(int i = 0; i < n; ++i) {
		if(s[i] == 'R') r++;
		else if(s[i] == 'B') b++;
		else if(s[i] == 'G') g++;
	}
	int ans = 0;
	if(r >= b && r >= g) {
		ans = n - r;
	}
	else if(b >= r && b >= g) {
		ans = n - b;
	}
	else if(g >= r && g >= b) {
		ans = n - g;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
