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
    int t;
    cin >> t;
    while(t--){
    	int x, y, z;
    	cin >> x >> y >> z;
    	int a, b, c;
    	if (x == y and z <= x){
    		a = x;
    		b = c = z;
    		printf("YES\n");
    		printf("%i %i %i\n", a, b, c);
    	}
    	else if (x == z and y <= x){
    		b = x;
    		a = c = y;
    		printf("YES\n");
    		printf("%i %i %i\n", a, b, c);
    	}
    	else if (y == z and x <= y){
    		c = y;
    		a = b = x;
    		printf("YES\n");
    		printf("%i %i %i\n", a, b, c);
    	}
    	else{
    		printf("NO\n");
    	}
    }
    return 0;
}

