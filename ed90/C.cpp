#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.length();
        // int k = 0;
        // for (int i = 0; i < n; ++i)
        // {
        //     if (s[i] == '+')
        //         k += 1;
        //     else
        //         k -= 1;
        // }
        // if (k > 0){
        //     cout << n << endl;
        //     continue;
        // }
        lli ans = 0;
        int curr = 0, init = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '+'){
                curr += 1;
            }
            else{
                curr -= 1;
            }
            if (init + curr < 0){
                ans += (i + 1);
                init += 1;
            }
        }
        ans += n;
        cout << ans << endl;
    }
    return 0;
}