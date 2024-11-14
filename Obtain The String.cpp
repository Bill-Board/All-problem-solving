 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ses   "\n"
#define whp   " "
#define mxi 99999
#define REP(i,a,b) for(int i=a; i<b; i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n)
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
v99 fx[4]= {1,-1,0,0};
v99 fy[4]= {0,0,1,-1};
//  aabce
//  ace

int main()
{
    int tc;
    cin >> tc;
    while(tc--) {
        string s, t;
        cin >> s >> t;
        vector<int> occ[26];
        for(int i = 0; i < s.size(); i++) {
            occ[s[i]-'a'].push_back(i);
        }
        int cnt = 1;
        int pos = 0;
        bool bad = 0;
        for(int i = 0; i < t.size(); i++) {
            if(occ[t[i]-'a'].size() == 0) {
                bad = 1;
                break;
            }
            int itr = lower_bound(occ[t[i]-'a'].begin(), occ[t[i]-'a'].end(), pos) - occ[t[i]-'a'].begin();

            if(itr == occ[t[i]-'a'].size()) {
                    cout<<"if"<<ses;
                ++cnt;
                pos = occ[t[i]-'a'][0] + 1;
            }
            else {cout<<"else"<<ses;
                pos = occ[t[i]-'a'][itr] + 1;
            }
            cout<<"itr "<<itr<<"  Pos "<<pos<<ses;
        }
        if(bad) cnt = -1;
        cout << cnt << endl;
    }
    return 0;
}

 /**v99 t;cin>>t;
    while(t--)
    {
        string s,t,r;cin>>s>>t;r=t;
        map<char,v99>mpp;
        v99 q=0,p=0;bool milse=false;
        for(v99 i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        for(v99 i=0;i<t.size();i++)
        {
            if(mpp[t[i]]==0){milse=true;break;}
        }
        reverse(r.begin(),r.end());
        if(r==s && t!=r){cout<<r.size()<<ses;}
        else{
        if(!milse)
        {
            for(v99 i=0;i<t.size();)
            {
                q++;
                for(v99 j=0;j<s.size();j++)
                    {
                        //cout<<t[i]<<".."<<s[j]<<ses;
                        if(t[i]==s[j])
                        {
                            i++;
                        }
                    }
            }
            cout<<q<<ses;
        }
        else cout<<-1<<ses;
        }
    }*/


/**
       Alhamdulillah...   😘😘😘😘😍😍😍😍
               মিলাইতে পারলেই                                  😋😍
                          🍔🍔🍔🍔🍰🍔🍔
                           🍦🍨🍳🍧🍔🍔
                         🍗🍗🍗🍗🍔🍔🍔🍔
                       🍕🍕🍕🍕🍕🍕🍰🍦🍨🤤🤤
                         🤤🤤🤤🤤🤤🤤🤤🤤
*/
