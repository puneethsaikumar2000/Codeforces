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
	cin>>n;
	vi a(n);
	int zeros = 0;
	REPN(i, n){
		cin >> a[i];
		if (a[i] == 0) zeros = 1;
	}	
	sort(a.begin(), a.end());
	if (a[0] < 0){
		cout << "NO\n";
		return ;
	}
	// if (300 - zeros)
	cout << "YES\n";
	cout << 300 << "\n";
	if (zeros == 1){
		cout << "0" << " ";
	}
	for (int i = 1; i <= 299; i++){
		cout << i << " ";
	}
	if (zeros == 0){
		cout << 300 << " ";
	}
	// for (int i = zeros; i < 300 - zeros; i++){
	// 	cout << i - zeros + 1 << " ";
	// }
	cout << "\n";

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

