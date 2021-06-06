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
    while (t--){
        int n, x;
        cin >> n >> x;
        vi a(n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] % 2)
                odd += 1;
            else
                even += 1;
        }
        if (odd == 0){
            cout << "No\n";
        }
        else if (even == 0){
            if (x % 2)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else{
            if (x == n and odd % 2 == 0){
                cout << "No\n";
            }
            else{
                cout << "Yes\n";
            }
        }
    }
    return 0;
}