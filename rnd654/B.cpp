#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
        int r, n;
        cin >> n >> r;
        lli ans = 0;
        if (r < n){
            if (r % 2 == 0){
                ans = (r / 2);
                ans *= (r + 1);
            }
            else{
                ans = (r + 1) / 2;
                ans *= r;
            }
        }
        else{
            if (n % 2 == 0){
                ans = n / 2;
                ans *= (n - 1);
            }
            else{
                ans = (n - 1) / 2;
                ans *= n;
            }
            ans += 1 ;
        }
        cout << ans << endl;
    }
    return 0;
}