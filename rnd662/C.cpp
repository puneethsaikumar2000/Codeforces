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
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REPN(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vi v(n);
    	map<int, int> m;
    	int l = 1;
    	vi val;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    		m[v[i]] += 1;
    		l = max(l, m[v[i]]);
    	}
    	for (auto i : m){
    		// cout << i.first << " " << i.second << "\n";
    		if (l == i.second){
    			val.pb(i.first);
    		}
    	}
    	int k = l - 1;
    	int val_s = val.size();
		int rem = n - (val_s * l);
		int q = rem / k;
		int ans = q + val_s - 1;
    	cout << ans << endl;
    }
    return 0;
}

;