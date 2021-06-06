#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        string b;
        cin >> b;
        cout << b[0] << b[1];
        for (int i = 3; i < b.length(); i += 2)
        {
            cout << b[i];
        }
        cout << endl;
    }
    return 0;
}