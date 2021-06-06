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
        vi v(n);
        vi d;
        int prev = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        d.push_back(v[0]);
        for (int i = 1; i < n - 1; ++i)
        {
            if ((v[i-1] < v[i] and v[i] > v[i+1]) or (v[i-1] > v[i] and v[i] < v[i+1])){
                d.push_back(v[i]);
            }
        }
        d.push_back(v[n-1]);
        cout << d.size() << endl;
        for (int i = 0; i < d.size(); ++i)
        {
            cout << d[i] << " ";
        }
        cout << endl;
    }
    return 0;
}