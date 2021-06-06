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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    vi alice, bob, both;
    for (int i = 0; i < n; ++i)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (a == 1 and b == 0){
            alice.pb(t);
        }
        else if (a == 0 and b == 1){
            bob.pb(t);
        }
        else if (a == 1 and b == 1){
            both.pb(t);
        }
    }
    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());
    sort(both.begin(), both.end());
    lli time = 0;
    if (both.size() + alice.size() < k or both.size() + bob.size() < k){
        cout << -1 << endl;
    }
    else{
        int i = 0, j = 0, k1 = 0, books = 0;
        while(i < alice.size() and j < bob.size() and k1 < both.size() and books < k){
            if (both[k1] <= alice[i] + bob[j]){
                time += both[k1];
                k1 += 1;
            }
            else{
                time += (alice[i] + bob[j]);
                i += 1;
                j += 1;
            }
            books += 1;
            // if (n == 100 and k == 1){
            //     printf("time: %i\n", time);
            // }
        }
        if (books != k){
            while(i < alice.size() and j < bob.size() and books < k){
                time += (alice[i] + bob[j]);
                i += 1;
                j += 1;
                books += 1;
            }
            while(k1 < both.size() and books < k){
                time += both[k1];
                books += 1;
                k1 += 1;
            }
        }
        if (books != k){
            cout << -1 << endl;
        }
        else{
            cout << time << endl;
        }
    }
    return 0;
}