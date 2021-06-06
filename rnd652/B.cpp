#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n >> s;
        bool all_ones = true, all_zeros = true;
        int last_zero = -1, first_one = -1;
        for (int i = 0; i < n; ++i){
            if (s[i] == '0'){
                all_ones = false;
                last_zero = i;
            }
            else{
                all_zeros = false;
                if (first_one == -1)
                    first_one = i;
            }
        }
        if (all_ones or all_zeros or (last_zero < first_one)){
            cout << s << endl;
            continue;
        }
        cout << s.substr(0, first_one) + s.substr(last_zero) << endl;
    }
    return 0;
}