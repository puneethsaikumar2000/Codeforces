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
        string s;
        cin >> s;
        int zeros = 0, ones = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0'){
                zeros += 1;
            }
            else{
                ones += 1;
            }
        }
        if (zeros == 0 or ones == 0){
            cout << 0 << endl;
            continue;
        }
        else{
            int moves = 0;
            moves = min(zeros, ones);
            int done_ones = 0, done_zeros = 0;
            for (int i = 0; i < s.length(); ++i)
            {
                if (s[i] == '0') done_zeros += 1;
                if (s[i] == '1') done_ones += 1;
                moves = min(moves, min(done_zeros + ones - done_ones, done_ones + zeros - done_zeros));
            }
            cout << moves << endl;
        }
    }
    return 0;
}