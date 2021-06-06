#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

bool ispower2(int n){
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return true;
    return false;
}

bool isprime(int n){
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

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
        int ans = 0;
        if (n == 1){
            cout << "FastestFinger" << endl;
            continue;
        }
        if (n == 2){
            cout << "Ashishgup" << endl;
            continue;
        }
        if (n % 2 == 0){
            if (ispower2(n) or (isprime(n/2))){
                cout << "FastestFinger" << endl;
            }
            else{
                cout << "Ashishgup" << endl;
            }
        }
        else{
            cout << "Ashishgup" << endl;
        }
    }
    return 0;
}