#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    	ulli a, b;
    	cin >> a >> b;
    	ulli x = min(a, b);
    	ulli y = max(a, b);
    	if (a == b){
    		cout << 0 << endl;
    		continue;
    	}
    	if (y % x != 0){
    		cout << -1 << endl;
    	}
    	else{
    		ulli d = y / x;
    		ulli ans = 0;
    		bool not_poss = false;
    		while (d != 1){
    			if (d % 8 == 0){
    				ans += 1;
    				d /= 8;
    			}
    			else if (d % 4 == 0){
    				ans += 1;
    				d /= 4;
    			}
    			else if (d % 2 == 0){
    				ans += 1;
    				d /= 2;
    			}
    			else{
    				not_poss = true;
    				break;
    			}
    		}
    		if (not_poss){
    			cout << -1 << endl;
    		}
    		else{
    			cout << ans << endl;
    		}
    	}
	}
    return 0;
}
