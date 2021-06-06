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
    	int n, m;
    	cin >> n >> m;
    	int a[n][m];
        bool pos = true;
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
    	}
        if (a[0][0] > 2 or a[n-1][0] > 2 or a[0][m-1] > 2 or a[n-1][m-1] > 2){
            pos = false;
        }
        else{
            a[0][0] = a[n-1][0] = a[0][m-1] = a[n-1][m-1] = 2;
        }
        for (int i = 1; i < n - 1 and pos; ++i)
        {
            for (int j = 1; j < m - 1 and pos; ++j)
            {
                if (a[i][j] >= 5){
                    pos = false;
                }
                else{
                    a[i][j] = 4;
                }
            }
        }
        for (int j = 1; j < m - 1 and pos; ++j)
        {
            if (a[0][j] > 3 or a[n-1][j] > 3)
                pos = false;
            else{
                a[0][j] = a[n-1][j] = 3;
            }
        }
        for (int i = 1; i < n - 1 and pos; ++i)
        {
            if (a[i][0] > 3 or a[i][m-1] > 3)
                pos = false;
            else{
                a[i][0] = a[i][m-1] = 3;
            }
        }
        if (not(pos)){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}

