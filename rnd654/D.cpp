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

// int a[300][300];

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int f = 0;
        if (k % n != 0)
            f = 2;
        int a[n][n];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n and k > 0; ++i)
        {
            for (int j = 0; j < n and k > 0; ++j)
            {
                int x = j + i, y = j;
                a[j][(i+j) % n] = 1;
                k -= 1;
            }
        }
        cout << f << endl;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}