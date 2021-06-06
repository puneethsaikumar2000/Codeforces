#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

const long long int mod = 1e9 + 7;

const long long int MN = 2e6 + 7;

int dp[MN];

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    dp[0] = dp[1] = 0;
    dp[2] = 4;
    for(int i = 3; i < MN; i++){
        long long w = dp[i-1];
        w += 2*dp[i-2] + (i % 3 == 2)*4;
        w %= mod;
        dp[i] = w;
    }

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << dp[n-1]%mod << endl;
    }
    return 0;
}