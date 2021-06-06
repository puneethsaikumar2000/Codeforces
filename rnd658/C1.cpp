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


void change(string &a, int k){
	for (int i = 0; i <= k; ++i)
	{
		if (a[i] == '0')
			a[i] = '1';
		else
			a[i] = '0';
	}
	for (int i = 0; 2*i <= k; ++i)
	{
		char c = a[i];
		a[i] = a[k - i];
		a[k - i] = c;
	}
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	string a, b;
    	cin >> a >> b;
    	vector<int> ans;
    	for (int i = n - 1; i >= 0; i--)
    	{
    		if (a[i] == b[i]){
    			continue;
    		}
    		if (a[0] == b[i]){
    			change(a, 0);
    			ans.push_back(1);
    			change(a, i);
    			ans.push_back(i + 1);
    		}
    		else{
    			change(a, i);
    			ans.push_back(i + 1);
    		}
    	}
    	cout << ans.size() << " ";
    	for(auto i : ans)
    		cout << i << " ";
    	cout << endl;
    }
    return 0;
}

