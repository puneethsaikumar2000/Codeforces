#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

const long long int mod = 1e9 + 7;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        lli a, b, c;
        cin >> a >> b >> c;
        int ans1 = -1, ans2 = -1;
        if (b*a <= c){
            ans1 = 1;
        }
        else{
            if (a < c){
                ans1 = 1;
            }
        }
        if (c < a*b){
            ans2 = b;
        }
        printf("%i %i\n", ans1, ans2);
    }
    return 0;
}