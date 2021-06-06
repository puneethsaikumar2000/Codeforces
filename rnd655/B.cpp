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
    	if (n % 2 == 0){
            cout << (n / 2) << " " << (n / 2) << endl;
        }
        else{
            int div = 1;
            for (int i = 3; i <= sqrt(n); i += 2)
            {
                if (n % i == 0){
                    div = i;
                    break;
                }
            }
            if (div == 1){
                cout << 1 << " " << n - 1 << endl;
            }
            else{
                int quot = n / div;
                cout << min(quot, n - quot) << " " << max(quot, n - quot) << endl;
            }
        }
    }
    return 0;
}

