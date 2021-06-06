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

lli binpow(lli a, lli b){
	lli res = 1;
	while(b > 0){
		if (b & 1)
			res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

int main(int argc, char const *argv[])
{
    fastio;
    int n;
    cin >> n;
	lli ans = (3*n - 1) * 3;
    ans *= binpow(4, n-3);
    cout << ans << endl;
    return 0;
}

