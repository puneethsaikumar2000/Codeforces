#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int ans = 1;
        for (int i = 1; i <= n; ++i)
        {
            int k = n / i;
            if (k > 1)
                ans = i;
            if(k == 1)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}