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
	vector<lli> x1(2*n);
	map<lli, lli> m;
	REPN(i, 2*n){
		cin >> x1[i];
		m[x1[i]] += 1;
	}
	bool even = true;
	vector<lli> x;
	for (auto i : m){
		if (i.second % 2 == 1){
			cout << "NO\n";
			even = false;
			return;
		}
		else{
			x.push_back(i.first);
		}
	}
	sort(x.begin(), x.end(), greater<lli>());
	lli fir = x[0];
	vector<lli> d;
	for (int i = 1; i < n; i++){
		lli diff = x[i] - x[i - 1];
		if (diff % 2 == 1){
			cout << "NO\n";
			return;
		}
		if (diff % (n + 1 - (i + 1)) != 0){
			cout << "NO\n";
			return;
		}
		if (diff % (2 * (n + 1 - (i + 1))) != 0){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

