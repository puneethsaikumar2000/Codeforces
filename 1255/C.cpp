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
    vector<vi> v(n-1);
    vector<vi> a(n+1);
    for (int i = 1; i <= n-2; ++i)
    {
        int x;
        for (int j = 1; j <= 3; ++j)
        {
            cin >> x;
            v[i].push_back(x);
            a[x].push_back(i);
        }
    }
    // printf("v :: \n");
    // for (int i = 1; i <= n-2; ++i)
    // {
    //     printf("%i : %i %i %i\n", i, v[i][0], v[i][1], v[i][2]);
    // }
    // cout << "a :: \n";
    // for (int i = 1; i <= n; ++i)
    // {
    //     cout << i << " : ";
    //     for (int j = 0; j < a[i].size(); ++j)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int f1 = 0, f2 = 0;
    int s1 = 0, s2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i].size() == 1){
            if (f1 != 0){
                f2 = i;
            }
            else{
                f1 = i;
            }
        }
        if (a[i].size() == 2){
            if (s1 != 0)
                s2 = i;
            else
                s1 = i;
        }
    }
    vector<int> p(n, 0);
    vector<bool> b(n+1, 0);
    p[0] = f1;
    p[n-1] = f2;
    int x = a[f1][0];
    // printf("f1 s1 s2 f2\n");
    // printf("%i %i %i %i\n", f1, s1, s2, f2);
    for (int j = 0; j < 3; ++j)
    {
        // printf("%i %i\n", j, x);
        if (v[x][j] == s1)
            p[1] = s1;
        if (v[x][j] == s2)
            p[1] = s2;
    }
    if (p[1] == s1)
        p[n-2] = s2;
    else
        p[n-2] = s1;
    b[f1] = 1; b[s2] = 1; b[s1] = 1; b[f2] = 1;
    // printf("%i %i %i %i\n", f1, s1, s2, f2);
    // printf("%i %i %i %i\n", p[0], p[1], p[n-2], p[n-1]);
    for (int i = 2; i < n-2; ++i)
    {
        int x1 = p[i-2], x2 = p[i-1];
        vector<int> ans;
        for (int j = 0; j < a[x1].size(); ++j)
        {
            int k = a[x1][j];
            for (int m = 0; m < 3; ++m)
            {
                // printf("k: %i v[k][m]%i\n", k, v[k][m]);
                if (v[k][m] == x2){
                    ans.push_back(k);
                }
            }
        }
        for (int k = 0; k < ans.size(); ++k)
        {
            for (int m = 0; m < 3; ++m)
            {
                // printf("for p[i] i: %i ans[k]: %i val: %i size: %i\n", i, ans[k], v[ans[k]][m], ans.size());
                if (v[ans[k]][m] != x1 and v[ans[k]][m] != x2 and (b[v[ans[k]][m]] == 0)){
                    // printf("found for i: %i val : %i\n", i, v[ans[k]][m]);
                    p[i] = v[ans[k]][m];
                    b[p[i]] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%i ", p[i]);
    }
    printf("\n");
    return 0;
}