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
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REPN(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void print(string s, auto x){
	cout << s << " : " << x << endl;
}

void solve1(){
	int n;
	cin >> n;
	vector<int> v(n);
	REPN(i, n){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int id = -1;
	int mindiff = INT_MAX;
	if (n == 2){
		cout << v[0] << " " << v[1] << endl;
		return ;
	}
	for(int i = 0; i < n - 1; i++){
		if (abs(v[i] - v[i + 1]) < mindiff){
			id = i;
			mindiff = abs(v[i] - v[i + 1]);
		}
	}
	for (int i = id + 1; i < n; i++){
		cout << v[i] << " ";
	}
	for(int i = 0; i <= id; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

void solve(){
	int n;
	cin >> n;
	vector<int> h(n);
	map<int, int> m;
	REPN(i, n){
		cin >> h[i];
		m[h[i]]++;
	}
	int hmin = INT_MAX;
	for (auto i : m){
		if (i.ss >= 2 and hmin > i.ff){
			hmin = i.ff;
		}
	}
	// print("hmin", hmin);
	sort(h.begin(),h.end());
	if (hmin == INT_MAX){
		// cout << "running 1" << endl;
		for (int i = 0; i < n; i++){
			cout << h[i] << " ";
		}
		cout << endl;
	}
	else{
		// cout << "running 2" << endl;
		cout << hmin << " ";
		int count = 2;
		for(int i = 0; i < n; i++){
			if (h[i] > hmin) cout << h[i] << " ";
			else if (h[i] == hmin){
				if (count != 0) count--;
				else cout << h[i] << " ";
			}
		}
		for (int i = 0; i < n; i++){
			if (h[i] >= hmin) break;
			else cout << h[i] << " ";
		}
		cout << hmin << endl;
	}
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve1();
    }
    return 0;
}

