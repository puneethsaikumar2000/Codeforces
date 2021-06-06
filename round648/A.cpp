#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

int a[50][50];

int empty_cells(int n, int m){
    int f = 0, s = 0;
    vector<int> empty_rows, empty_cols;
    for (int i = 0; i < n; ++i)
    {
        bool pos = true;
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] == 1){
                pos = false;
                break;
            }
        }
        if (pos)
            empty_rows.push_back(i);
    }
    for (int i = 0; i < m; ++i)
    {
        bool pos = true;
        for (int j = 0; j < n; ++j)
        {
            if (a[j][i] == 1){
                pos = false;
                break;
            }
        }
        if (pos)
            empty_cols.push_back(i);
    }
    // pii ans;
    // if (empty_cols.size() == 0 or empty_rows.size() == 0){
    //     ans.first = 0;
    //     ans.second = -1;
    // }
    // else{
    //     ans = make_pair(empty_rows[0], empty_cols[0]);
    // }
    return min(empty_rows.size(), empty_cols.size());
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < 50; ++i)
        {
            for (int j = 0; j < 50; ++j)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        int ans = empty_cells(n, m);
        if (ans % 2 == 1){
            cout << "Ashish" << endl;
        }
        else{
            cout << "Vivek" << endl;
        }
    }
    return 0;
}