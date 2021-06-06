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

#define int long long


void update(int i, int cnt[], string &s, int n){
    int new_val;
    int old_val = cnt[i];
    if ((i + 1)*2 >= n){
        new_val = (s[i] != '?')? 1 : 2;
    }
    else{
        if (s[i] == '?') new_val = cnt[2*(i + 1) - 1] + cnt[(2*(i + 1))];
        else if (s[i] == '1') new_val = cnt[2*(i + 1) - 1];
        else if (s[i] == '0') new_val = cnt[(2*(i + 1))];       
    }

    if (new_val != old_val){
        cnt[i] = new_val;
        // cout << "updating i : " << i << " with new_value : " << new_val << " going to j - " << ((i + 1) / 2) - 1 << '\n' << flush;
        if (i != 0)
            update(((i + 1) / 2) - 1, cnt, s, n);
        return ;
    }
    return;
}

void solve(){
    int k;
    cin >> k;
	string s;
	cin >> s;
    reverse(s.begin(),s.end());
	int n = pow(2, k) - 1;
    int cnt[n];
    // cout << s << "\n" << flush;
    for(int i = n - 1; i >= 0; i--){
        if ((i + 1)*2 >= n){
            cnt[i] = (s[i] != '?')? 1 : 2;
            // cout << "1 - i : " << i << " " << cnt[i] << "\n" << flush;
        }
        else{
            if (s[i] == '?') cnt[i] = cnt[2*(i + 1) - 1] + cnt[(2*(i + 1))];
            else if (s[i] == '1') cnt[i] = cnt[2*(i + 1) - 1];
            else if (s[i] == '0') cnt[i] = cnt[(2*(i + 1))];
            // cout << "2 - i : " << i << " " << cnt[i] << "\n" << flush;
        }
    }
    // for(int i = 0; i < n; i++) cout << cnt[i] << " " << flush;
    // cout << "\n" << flush;
    int q;
    cin >> q;
    REPN(i, q){
        int p;
        char c;
        cin >> p >> c;
        p = n - p;
        s[p] = c;
        // cout << p << " : " << s << "\n" << flush;
        update(p, cnt, s, n);
        // for(int i = 0; i < n; i++) cout << cnt[i] << " " << flush;
        // cout << "\n" << flush;
        int ans = cnt[0];
        cout << ans << "\n" << flush;
    }
}

signed main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

