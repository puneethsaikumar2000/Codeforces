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

void elegant_sloution1(string a, string b, int n){
    vector<int> op1, op2;
    a += '0'; b += '0';
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] != a[i - 1]) op1.push_back(i);
        if (b[i] != b[i - 1]) op2.push_back(i);
    }
    op1.insert(op1.end(), op2.rbegin(), op2.rend());
    cout << op1.size();
    for(auto k : op1)
        cout << ' ' << k;
    cout << '\n';
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
        // elegant_sloution1(a, b, n);
        // Method2 :
        vector<int> ans;
        bool change = false;
        int idx = 0;
    	for (int i = n - 1; i >= 0; i--)
    	{
    		if (change ^ (a[idx] == b[i])){
    			ans.push_back(1);
    		}
            ans.push_back(i + 1);
            if (change) idx -= i;
            else idx += i;
            change = !change;
    	}
    	cout << ans.size() << " ";
    	for(auto i : ans)
    		cout << i << " ";
    	cout << endl;
    }
    return 0;
}

