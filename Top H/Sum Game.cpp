#include <bits/stdc++.h>
using namespace std;
vector<int>arr;
int n,X;
bool alabu()
{
	unordered_map<int, pair<int, int> > mp;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			mp[arr[i] + arr[j]] = { i, j };

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int sum = arr[i] + arr[j];

			if (mp.find(X - sum) != mp.end()) {
				pair<int, int> p = mp[X - sum];
				if (p.first != i && p.first != j && p.second != i && p.second != j) {
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{
    int t,tc=1;cin>>t;
    while(t--)
    {
        arr.clear();
        cin>>n>>X;
        for(int i=0;i<n;i++)
        {
            string s;cin>>s;
            int sum=0;
            for(int j=0;j<s.size();j++)sum+=(s[j]-'a'+1);
            arr.push_back(sum);
        }
        cout<<"CASE "<<tc++<<": ";
        if(alabu())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
	return 0;
}
