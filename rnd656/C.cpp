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

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    fastio;
    // printf("kdhahdda\n");
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vi v(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    	}
    	if (n == 1){
    		cout << 0 << endl;
    		continue;
    	}
    	int ind = n - 1;
    	while(ind > 0){
    		if(v[ind] > v[ind - 1])
    			break;
    		ind--;
    	}
    	if (ind == 0){
    		cout << 0 << endl;
    		continue;
    	}
    	while(ind > 0){
    		if (v[ind] < v[ind - 1])
    			break;
    		ind--;
    	}
    	cout << ind << endl;
    }
    return 0;
}

