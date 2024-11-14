#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int f[n];
    map<int ,int>mp;
    map<int ,int>::iterator it;
    for(int i=1;i<=n;i++){
        cin>>f[i];
        mp[f[i]]++;
    }for(it=mp.begin();it!=mp.end();++it)
        cout<<it->first<<" "<<it->second<<endl;
    for(int i=0;i<=n;i++){
        //cin>>f[i];
       int ans=mp[i];
        cout<<i<<" is="<<ans<<" "<<endl;
    }

    return 0;
}
