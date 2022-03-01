#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define lli long long int
#define ulli unsigned long long int
#define ui unsigned int
#define ld long double

int main() {

    ulli n;
    cin >> n;

    cout << (n/2+1)*(n/2+1) + n % 2 * (n/2+1) << endl;

    return 0;
}
