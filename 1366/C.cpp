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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        vector<int> ones(n+m-1, 0);
        vector<int> zeros(n+m-1, 0);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
                if (a[i][j] == 0)
                    zeros[i+j] += 1;
                else
                    ones[i+j] += 1;
            }
        }
        int ans = 0;
        for (int k = 0; k <= (n + m) / 2; ++k)
        {
            if (k >= n+m-2-k)
                continue;
            int one = ones[k] + ones[n+m-2-k];
            int zer = zeros[k] + zeros[n+m-2-k];
            ans += min(one, zer);
        }
        cout << ans << endl;
    }
    return 0;
}