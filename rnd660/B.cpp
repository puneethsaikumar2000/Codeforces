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
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
        int eights;
        if (n % 4 == 0)
            eights = (n / 4);
        else
            eights = (n / 4) + 1;
        int nines = n - eights;
        for (int i = 0; i < nines; ++i)
        {
            cout << 9;
        }
        for (int i = 0; i < eights; ++i)
        {
            cout << 8;
        }
        cout << endl;
    }
    return 0;
}

