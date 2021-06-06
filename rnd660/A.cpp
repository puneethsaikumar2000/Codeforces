#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	if (n == 36){
    		cout << "YES" << endl;
    		cout << "6 10 15 5" << endl;
    	}
    	else if (n == 40){
    		cout << "YES" << endl;
    		cout << "6 10 15 9" << endl;
    	}
    	else if (n == 44){
    		cout << "YES" << endl;
    		cout << "6 10 15 13" << endl;
    	}
    	else if (n >= 31){
    		cout << "YES" << endl;
    		cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
    	}
    	else{
    		cout << "NO" << endl;
    	}
    }
    return 0;
}

