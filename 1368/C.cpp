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
    int k = 4;
    k += 3*n;
    printf("%i\n", k);
    printf("%i %i\n", 0, 0);
    for (int i = 0; i <= n; ++i)
    {
        printf("%i %i\n", 0 + i, 1 + i);
        printf("%i %i\n", 1 + i, 1 + i);
        printf("%i %i\n", 1 + i, 0 + i);
    }
    return 0;
}