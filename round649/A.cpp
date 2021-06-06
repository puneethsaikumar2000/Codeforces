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
        int n, x;
        cin >> n >> x;
        vi v(n);
        vi d;
        vector<lli> sum(n, 0);
        int ans = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (i != 0)
                sum[i] = sum[i-1] + v[i];
            else
                sum[i] = v[i];
            if (v[i] % x != 0)
                d.push_back(i);
            if (sum[i] % x != 0)
                ans = i + 1;
        }
        if (sum[n-1] % x != 0){
            cout << n << endl;
        }
        else{
            if (d.size() == 0)
                cout << -1 << endl;
            else{
                int i = d[0] + 1;
                int j = d[d.size() - 1] + 1;
                if (i == j){
                    cout << max(n-i, i) << endl;
                }
                else{
                    cout << max(max(n-i, d[1]), max(n-d[d.size() - 2]-1, j-1)) << endl;
                }
                // printf("%i %i %i %i %i\n", i, j,n-d[d.size() - 2], n, d[d.size() - 2]);
                // cout << max(max(n-i, i), max(n-j, j)) << endl;
            }
        }
    }
    return 0;
}