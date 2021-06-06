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
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void solve(){
	int n;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vi increase(n, 0);
	int op = 0;
	int max_so_far = v[0];
	for (int i = 0; i < n; ++i)
	{
		if (v[i] < max_so_far){
			increase[i] = max_so_far - v[i];
		}
		max_so_far = max(max_so_far, v[i]);
	}
	for (int inc : increase){
		cout << inc << " ";
	}
	cout << "\n";
	int l = 0;
	for (int i = 0; i < n; ++i)
	{
		cout << i << " " << l << " " << increase[i] << "\n";
		if (increase[i] == 0){
			op += l;
			l = increase[i];
		}
		else{
			l = max(l, increase[i]);
		}
		// cout << i << " " << l << "\n";
	}
	cout << n << " " << l << "\n";
	op += l;
	cout << op << "\n";
}

void solve2(){
	int n;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vi diff(n);
	diff[0] = 0;
	for (int i = 1; i < n; ++i)
	{
		diff[i] = v[i - 1] - v[i];
	}
	// for (int i : diff){
	// 	cout << i << " ";
	// }
	// cout << "\n";
	// lli max_so_far = 0;
	// lli max_here = 0;
	lli ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (diff[i] > 0) ans += diff[i];
	}
	cout << ans << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	// solve();
    	solve2();
    }
    return 0;
}

