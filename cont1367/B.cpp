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
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n), even, odd;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (i % 2 != a[i] % 2){
                if (a[i] % 2 == 1)
                    odd.push_back(i);
                else
                    even.push_back(i);
            }
        }
        if (odd.size() != even.size())
            cout << -1 << endl;
        else if (odd.size() == 0)
            cout << 0 << endl;
        else
            cout << odd.size() << endl;
    }
    return 0;
}