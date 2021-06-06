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
    	ulli n;
        cin >> n;
        ulli ans = 0;
        ulli i = 1;
        while (n != 0){
            ans += (i*((n + 1) / 2));
            n /= 2;
            i += 1;
        }
        cout << ans << endl;
	}
    return 0;
}
