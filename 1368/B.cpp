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
    long long int k;
    cin >> k;
    vector<long long> v(10, 1);
    long long int mult = 1;
    int i = 0;
    while (mult < k){
        i %= 10;
        v[i] += 1;
        mult *= v[i];
        mult /= (v[i] - 1);
        i += 1;
    }
    string s = "codeforces";
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < v[i]; j++)
            cout << s[i];
    }
    cout << endl;
    return 0;
}