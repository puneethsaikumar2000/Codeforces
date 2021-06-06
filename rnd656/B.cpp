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
    	vi v(2*n);
    	vi found(n+1, false);
    	found[0] = true;
    	vi p;
    	for (int i = 0; i < 2*n; ++i)
    	{
    		cin >> v[i];
    		if (not(found[v[i]])){
    			p.pb(v[i]);
    			found[v[i]] = true;
    		}
    	}
    	for(auto i : p)
    		cout << i << " ";
    	cout << endl;
    }
    return 0;
}

