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
        int ones = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '1')
                ones += 1;
        }
        int n = s.length();
        int ans = min(ones, n - ones);
        if (ans % 2 == 0)
            printf("NET\n");
        else
            printf("DA\n");
    }
    return 0;
}