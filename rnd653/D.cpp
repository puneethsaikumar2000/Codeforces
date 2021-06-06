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

pii give_pair(int x, auto m, auto all){

    return mk(0, 0);
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vi a(n);
        vi incr;
        lli moves = 0;
        map<lli, lli> all;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            // printf("t:%i i:%i\n", t, i);
            if (a[i] % k != 0){
                lli x = k - (a[i] % k);
                if (all[x] == 0) all[x] = 0;
                // if (all[x] >= 1) x += all[x]*k;
                all[x] += 1;
                incr.pb(x);
                moves = max(moves, x + ((all[x]-1)*k));
            }
        }
        if (incr.size() == 0){
            cout << 0 << endl;
        }
        else{
            cout << moves + 1 << endl;
        }
    }
    return 0;
}