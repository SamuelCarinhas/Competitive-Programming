#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	unsigned long long current = 4;

	for(int i = 0; i < n; i++) {
		current = current * 4 - 4 * sqrt(current) + 1;
	}

	cout << current << endl;

	return 0;
}
