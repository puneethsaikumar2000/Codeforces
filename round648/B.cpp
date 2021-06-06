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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vi v0, v1, ind0, ind1;
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
            if (b[i] == 1){
                v1.push_back(a[i]);
                ind1.push_back(i);
            }
            else{
                v0.push_back(a[i]);
                ind0.push_back(i);
            }
        }
        bool ord = true;
        if (v1.size() == 0){
            for (int i = 1; i < v0.size(); ++i)
            {
                if (v0[i] < v0[i-1])
                    ord = false;
            }
            // if (ord){
            //     cout << "Yes" << endl;
            // }
        }
        else if (v0.size() == 0){
            for (int i = 1; i < v1.size(); ++i)
            {
                if (v1[i] < v1[i-1])
                    ord = false;
            }
        }
        else{
            // cout << "Yes" << endl;
        }
        if (ord)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}