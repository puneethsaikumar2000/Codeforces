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

int gcd(int a, int b, int &x, int &y){
	if (b == 0){
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int d = gcd(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}

int main(int argc, char const *argv[])
{
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    int x, y;
    int d = gcd(a, b, x, y);
    // cout << x << " " << y << endl;
    // printf("%i %i\n", x, y);
    if (c % d or x < 0 or y < 0){
    	cout << "No\n";
    }
    else{
    	cout << "Yes\n";
    }
    return 0;
}

