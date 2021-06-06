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

// #define int long long;

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vi v(n), sort_v(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
            sort_v[i] = v[i];
    	}
        int k = 0;
        sort(sort_v.begin(), sort_v.end());
        bool order = true;
        int mex;
        vi unfixed;
        vi ans;
        do
        {
            order = true;
            if (unfixed.size() != 0)
                unfixed.clear();
            for (int i = 0; i < n; ++i)
            {
                if (v[i] != i){
                    unfixed.pb(i);
                }
                sort_v[i] = v[i];
            }
            sort(sort_v.begin(), sort_v.end());
            mex = 0;
            for (int i = 0; i < n; ++i)
            {
                if (mex == sort_v[i])
                    mex += 1;
            }

            if (mex < n){
                v[mex] = mex;
                k += 1;
                ans.pb(mex);
            }
            else if (mex == n){
                if (unfixed.size() != 0){
                    v[unfixed[0]] = n;
                    k += 1;
                    ans.pb(unfixed[0]);
                }
            }

            for (int i = 0; i < n; ++i)
            {
                if (v[i] != i){
                    order = false;
                }
            }

        } while (not(order));

        cout << ans.size() << endl;
        for (auto i : ans)
            cout << i + 1 << " ";
        cout << endl;
    }
    return 0;
}

