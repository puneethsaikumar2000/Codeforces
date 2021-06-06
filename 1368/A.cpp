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
        int a, b, n;
        cin >> a >> b >> n;
        int x = min(a, b), y = max(a, b);
        a = x, b = y;
        long long ans = 0;
        while (a <= n and b <= n){
            a += b;
            int x = min(a, b), y = max(a, b);
            a = x, b = y;
            ans += 1;
        }
        cout << ans << endl;
    }
    return 0;
}