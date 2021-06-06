#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;

		bool all_same = true;

		for (int i = 0; i < s.length() - 1; ++i)
		{
			if (s[i] == s[i+1])
				continue;
			all_same = false;
		}
		
		// printf("0: %i  1: %i\n", zeros, ones);

		if (all_same or (s.length() == 2)){
			cout<<s<<endl;
		}
		else{
			int m = s.length();
			if (s[0] == '1'){
				for (int i = 0; i < m; ++i)
				{
					cout<<"10";
				}
				cout<<endl;
			}
			else{
				for (int i = 0; i < m; ++i)
				{
					cout<<"01";
				}
				cout<<endl;
			}
		}
		
	}
	return 0;
}