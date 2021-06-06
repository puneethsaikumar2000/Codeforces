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
        int n;
        cin >> n;
        int twos = 0, threes = 0;
        while (n % 2 == 0){
            n /= 2;
            twos += 1;
        }
        while (n % 3 == 0){
            n /= 3;
            threes += 1;
        }
        if (twos > threes){
            cout << -1 << endl;
        }
        else{
            if (n != 1){
                cout << -1 << endl;
            }
            else{
                cout << (2*threes - twos) << endl;
            }
        }
    }
    return 0;
}