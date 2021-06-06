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
typedef vector<vi> vvi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


// INCOMPLETE.

void BFS(vvi &G, vi &d){
	queue <pair<int, int> > q;

	vi visited(n + 1, 0);
	q.push(mk(1, 0));

	while(q.size() != 0){

		pair<int, int> p = q.front(); q.pop();
		visited[p.ff] = 1;
		d[p.ff] = p.ss;

		for (auto itr = G[ind].begin(); itr != G[ind].end(); ++itr)
		{
			if (not(visited[(*itr)])){
				q.push(mk((*itr), p.ss + 1));
			}
		}
	}

}


void count_people(vvi &G, vi &d, vi &people, int ind){

	if (people[ind] != -1)
		return people[ind];

	int peop = 0;
	for (auto itr = G[ind].begin(); itr != G[ind].end(); ++itr)
	{
		if (d[(*itr)] != d[ind] + 1)
			continue;

		peop += count_people(G, d, people, (*itr));
	}

	people[ind] = peop;

	return people[ind];

}

bool check(vvi &G, vi &good, &bad, vi &d, int ind, vi &checking){
	for (int i = 1; i <= G.size(); ++i)
	{
		int below_good = 0;
		for (auto itr = G[i].begin(); itr != G[i].end(); ++itr){
			if (d[(*itr)] == d[i] + 1){
				below_good += ;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n, m;
    	cin >> n >> m;
    	vi p(n + 1), h(n + 1);
    	vector<vi> G(n + 1);
    	vector<int> people(n + 1, -1);
    	vi good_people(n + 1, -1), bad_people(n + 1, -1);
    	vector<int> d(n + 1);
    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> p[i];
    	}
    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> h[i];
    	}
    	int x, y;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		cin >> x >> y;
    		G[x].push_back(y);
    		G[y].push_back(x);
    	}

    	BFS(G, d);

    	// people[1] = m;

    	count_people(G, d, people, 1);

    	for (int i = 1; i <= n; ++i)
    	{
    		int tot = people[i];
    		int diff = h[i];
    		good_people[i] = (tot + diff) / 2;
    		bad_people[i] = (tot - diff) / 2;
    	}

    	bool pos = true;

    	vi checking(n + 1, -1);
    	pos = check(G, good_people, bad_people, d, 1, checking);

    	if (pos)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;

    }
    return 0;
}

