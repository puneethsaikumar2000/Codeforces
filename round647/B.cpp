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
    	int n;
    	cin >> n;
        vi v(n);
        int M = 0;
        set<int> s1;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            s1.insert(v[i]);
            M = max(M, v[i]);
        }
        bool pos = false;
        for (int i = 1; i <= 2*M; ++i)
        {
            set<int> s2;
            for (int j = 0; j < n; ++j)
            {
                s2.insert(i ^ v[j]);
            }
            if (s1 == s2){
                cout << i << endl;
                pos = true;
                break;
            }
        }
        if (!(pos)){
            cout << -1 << endl;
        }
	}
    return 0;
}
