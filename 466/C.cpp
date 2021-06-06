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
    lli n;
    cin >> n;
    vector<int> v(n);
    vector<long long> sum(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (i != 0)
            sum[i] = sum[i-1] + v[i];
        else
            sum[i] = v[i];
    }
    if (sum[n-1] % 3 != 0){
        cout << 0 << endl;
    }
    else{
        vector<int> cnt(n, 0);
        vector<int> sums(n, 0);
        for (int i = 2; i < n; ++i)
        {
            if (sum[i] - v[i] == 2*sum[n-1]/3)
                cnt[i] = 1;
        }
        for (int i = n-1; i >= 2; --i)
        {
            if (i != n-1)
                sums[i] = cnt[i] + sums[i+1];
            else
                sums[i] = cnt[i];
        }
        long long ans = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            if (sum[i] == sum[n-1] / 3)
                ans += sums[i + 2];
        }
        cout << ans << endl;
    }
    return 0;
}