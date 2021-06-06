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
	vlli h(n);
	ulli sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> h[i];
		sum += h[i];
	}
	lli k = n;
	k *= (n - 1);
	k /= 2;
	lli mean_height = (sum - k);
	mean_height /= n;
	lli rem = sum - k - (n * mean_height);
	for (int i = 0; i < n; ++i)
	{
		h[i] = mean_height + i;
	}
	int j = 0;
	while (rem > 0){
		int i = j;
		while (i >= 0 and rem > 0){
			h[i] += 1;
			rem -= 1;
		}
		j += 1;
	}
	for (auto i : h){
		cout << i << " ";
	}
	cout << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    t = 1;
    while(t--){
    	solve();
    }
    return 0;
}

