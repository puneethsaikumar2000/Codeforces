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
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int ones = 0, zeros = 0;
    vi v(n,0);
    vi indices;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
            ones += 1;
        else
            zeros += 1;
        if (t[i] == '1')
            ones -= 1;
        else
            zeros -= 1;
        if (s[i] != t[i])
            indices.push_back(i);
    }
    if (ones != 0 or zeros != 0){
        cout << -1 << endl;
    }
    else if (s == t){
        cout << 0 << endl;
    }
    else{
        zeros = 0; ones = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1' && t[i] == '0'){
                if (zeros) zeros--;
                ones++;
            }
            else if (s[i] == '0' && t[i] == '1'){
                if (ones) ones--;
                zeros++;
            }
        }
        cout << zeros + ones << endl;
    }
    return 0;
}