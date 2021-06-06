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
    	int n;
    	cin >> n;
    	vi v(n);
        vi match;
        int matching = 0;
        int first_zero = -1, last_zero = -1;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] == i + 1){
                match.pb(1);
                matching += 1;
            }
            else{
                match.pb(0);
                last_zero = i;
                if (first_zero == -1) first_zero = i;
            }
        }
        if (matching == n){
            cout << 0 << endl;
            continue;
        }
        if (matching == 0){
            cout << 1 << endl;
            continue;
        }
        int ans = 1;
        for (int i = first_zero; i < last_zero; ++i)
        {
            if (match[i] == 1){
                ans = 2;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

