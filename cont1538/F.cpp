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

const int N = 1e9;

lli func[N + 1];

lli f(lli x){
	lli ans = 0;
	while(x % 10 == 9){
		ans++;
		x /= 10;
	}
	ans++;
	return ans;
}

void solve(){
	int l, r;
	cin >> l >> r;
	cout << func[r] - func[l] << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    func[1] = 0;
    func[2] = 1;
    for(int i = 3; i < N; i++){
    	func[i] = func[i - 1] + f(i - 1);
    	// cout << "i : " << i << endl << flush;
    }
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

