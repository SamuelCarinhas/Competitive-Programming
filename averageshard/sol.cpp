#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define lli long long int
#define ulli unsigned long long int
#define ui unsigned int
#define ld long double

int main() {

    int t;
    cin >> t;

    while(t--) {
        int cs, e;
        cin >> cs >> e;

        vi cs_vec(cs), e_vec(e);

        lli cs_iq = 0, e_iq = 0;
        for(int i = 0; i < cs; i++) {
            cin >> cs_vec[i];
            cs_iq += cs_vec[i];
        }
        
        for(int i = 0; i < e; i++) {
            cin >> e_vec[i];
            e_iq += e_vec[i];
        }

        ld cs_avg = cs_iq*1.0/cs, e_avg = e_iq*1.0/e;
        
        int sol = 0;

        for(int i = 0; i < cs; i++) 
            sol += ((cs_iq - cs_vec[i])/(cs-1.0) > cs_avg) && ((e_iq + cs_vec[i])/(e+1.0) > e_avg);

        cout << sol << endl;

    }

    return 0;
}
