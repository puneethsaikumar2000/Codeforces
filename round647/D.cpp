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
    int n, m;
    cin >> n >> m;
    vector<vector<int> > G(n);
    vector<vector<int> > Rev_G(n);
    vi v(n);
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        Rev_G[b-1].push_back(a-1);
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    return 0;
}
