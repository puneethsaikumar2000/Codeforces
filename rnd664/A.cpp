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

bool even(int x){
	return (x % 2 == 0);
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int r, g, b, w;
    	cin >> r >> g >> b >> w;
    	int x = min(min(r, g), b);
    	int num_even = even(r) + even(b) + even(g) + even(w);
    	int num_odd = 4 - num_even;
    	if (even(r + g + b + w)){
    		if (num_odd == 4 or num_odd == 0){
    			cout << "Yes\n";
    		}
    		else{
    			cout << "No\n";
    		}
    	}
    	else{
    		if (num_odd == 3){
    			if (x != 0)
    				cout << "Yes\n";
    			else
    				cout << "No\n";
    		}
    		else{
    			cout << "Yes\n";
    		}
    	}
    }
    return 0;
}

