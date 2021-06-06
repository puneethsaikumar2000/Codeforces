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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n <= k+1){
            bool all = true;
            for (int i = 0; i < n; ++i)
            {
                if (s[i] == '1')
                    all = false;
            }
            if (all)
                cout << 1 << endl;
            else
                cout << 0 << endl;
            continue;
        }
        vector<int> l;
        int siz = 0;
        int ans = 0;
        int ones = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
                siz += 1;
            else{
                if (siz != 0){
                    // printf("size : %i\n", siz);
                    l.push_back(siz);
                    siz = 0;
                }
                ones += 1;
            }
        }
        if (siz != 0)
            l.push_back(siz);
        if (l.size() == 1){
            if (s[0] == '0' and s[n-1] == '0'){
                ans += 1;
                if (l[0] - 1 > 0)
                    ans += (l[0] - 1) / (k + 1);
            }
            else if (s[0] == '0' or s[n-1] == '0'){
                ans += l[0] / (k + 1);
            }
            else{
                if (l[0] - k > 0)
                    ans += (l[0] - k) / (k + 1);
            }
            cout << ans << endl;
            continue;
        }
        for (int i = 1; i < l.size() - 1; ++i)
        {
            if (l[i] - k > 0)
                ans += ((l[i] - k) / (k + 1));
        }
        if (s[0] != '1'){
            ans += l[0]/ (k + 1);
        }
        else{
            if (l[0] - k > 0)
                ans += (l[0] - k)/ (k + 1);
        }
        if (s[n - 1] != '1'){
            if (l.size() != 1)
                ans += l[l.size() - 1]/ (k + 1);
        }
        else{
            if (l.size() != 1 and (l[l.size() - 1] - k) > 0)
                ans += (l[l.size() - 1] - k)/ (k + 1);
        }
        cout << ans << endl;
    }
    return 0;
}