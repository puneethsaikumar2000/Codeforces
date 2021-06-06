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
        vi v(2*n);
        vi odd,even;
        for (int i = 0; i < 2*n; ++i)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even.push_back(i+1);
            else
                odd.push_back(i+1);
        }
        if (odd.size() % 2 == 0){
            if (odd.size() >= 2){
                odd.erase(odd.begin());
                odd.erase(odd.begin());
            }
            else{
                even.erase(even.begin());
                even.erase(even.begin());
            }
        }
        else{
            odd.erase(odd.begin());
            even.erase(even.begin());
        }
        for (int i = 0; i < odd.size(); i += 2)
        {
            printf("%i %i\n", odd[i], odd[i+1]);
        }
        for (int i = 0; i < even.size(); i += 2)
        {
            printf("%i %i\n", even[i], even[i+1]);
        }
    }
    return 0;
}