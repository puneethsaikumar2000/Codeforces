#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long

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
        vi v1(n), v2(k);
        for (int i = 0; i < n; ++i)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < k; ++i)
        {
            cin >> v2[i];
        }
        sort(v2.begin(), v2.end());
        sort(v1.begin(), v1.end(), greater<int>());
        vector<vector<int> > v3(k);
        int i1 = 0;
        for (int j1 = 0; j1 < k; ++j1)
        {
            v3[j1].push_back(v1[i1]);
            i1 += 1;
        }
        for (int j1 = 0; j1 < k and i1 < n; ++j1)
        {
            while (v3[j1].size() < v2[j1] and i1 < n){
                v3[j1].push_back(v1[i1]);
                i1 += 1;
            }
        }
        // while(i1 < n){
        //     for (int j1 = 0; j1 < k and i1 < n; ++j1)
        //     {
        //         if (v3[j1].size() < v2[j1]){
        //             v3[j1].push_back(v1[i1]);
        //             i1++;
        //         }
        //     }
        // }
        // printf("v1::\n");
        // for(auto i: v1)
        //     printf("%i ", i);;
        // printf("\nv2::\n");
        // for(auto i: v2)
        //     printf("%i ", i);;
        // printf("\n");
        // for(auto i: v3){
        //     for (auto j : i){
        //         printf("%i ", j);
        //     }
        //     printf("\n");
        // }
        long long sum = 0;
        for (int i = 0; i < k; i++){
            sum += v3[i][0] + v3[i][v3[i].size() - 1];
        }
        // for (int i = 0; i < k; ++i)
        // {
        //     sum += v1[i];
        // }
        // int i = 0, j = 0;
        // long long sumj = 0;
        // while(i < v1.size() and j < v2.size() and k >= 0){
        //     printf("i: %i  j: %i  sumj: %lld  k: %i\n", i, j, sumj, k);
        //     sum += v1[i + ((v2[j] - sumj - 1)*k)];
        //     i += (v2[j] - sumj - 1)*k;
        //     k -= 1;
        //     sumj += v2[j];
        //     j += 1;
        //     int prev = v2[j-1];
        //     int add_k = k;
        //     while (v2[j] == prev){
        //         i += 1;
        //         sum += v1[i];
        //         j += 1;
        //         add_k -= 1;
        //     }
        //     i += add_k;
        // }
        cout << sum << endl;
    }
    return 0;
}