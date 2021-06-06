#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

int matching(vi &a, vi &b, int k){
    int cnt = 0;
    // vi v(n);
    for (int i = 0; i < a.size(); ++i)
    {
        // v[i] = a[i+k%n];
        if (a[(i + k) % (a.size())] == b[i]){
            cnt += 1;
        }
    }
    return cnt;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi a(n), b(n);
    vi ans(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        ans[a[i] - 1] = i;
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
        ans[b[i] - 1] -= i;
        if (ans[b[i] - 1] < 0){
            ans[b[i] - 1] += n;
        }
        if (ans[b[i] - 1] == n){
            ans[b[i] - 1] = 0;
        }
    }
    vi v(n, 0);
    for (int i = 0; i < n; ++i)
    {
        v[ans[i]] += 1;
    }
    int soln = 0;
    for (int i = 0; i < n; ++i)
    {
        soln = max(soln, v[i]);
    }
    cout << soln << endl;
    return 0;
}