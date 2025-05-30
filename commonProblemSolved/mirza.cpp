#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ba[100002];
ll now[100002];
ll parent[100002];
int main()
{
    freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    ll t;
    cin>>t;
    /*vector<ll>ba;
    vector<ll>now;
    vector<ll>parent;
    vector<ll>ans;*/
    for(ll i=1;i<=t;i++)
    {
        ll bash;
        /*now.clear();
        parent.clear();
        ans.clear();
        ba.clear();*/

       // scanf("%lld",&bash);
        cin>>bash;

        vector<ll>ans;
        memset(ba,0,bash);
        memset(now,0,bash);
        for(ll j=0;j<bash;j++)parent[j]=-1;
        for(ll j=0;j<bash;j++)
        {
            ll a;
            //scanf("%lld",&a);
           /* cin>>a;
            ba.push_back(a);*/
            cin>>ba[j];
        }
        //for(ll h=0;h<bash;h++)parent.push_back(-1);
       // now.push_back(0);
        now[0]=0;
        ll len=0;
        for(ll g=1;g<bash;g++)
           {
               if(ba[g]<ba[now[0]])
               {
                   now[0]=g;
                   //cout<<g<<"index"<<endl;
               }
              else if(ba[g]>ba[now[len]])
                {
                len++;
                now[len]=g;
                parent[g]=now[len-1];
               // cout<<ba[g]<<" "<<len<<endl;
                }
              else if(ba[g]>ba[now[0]] && ba[now[len]]>ba[g])
                {
                  ll start=0;
                  ll en=len;
                while(start<=en)
                {
                    ll mid=(start+en)/2;
                    if(ba[g]>ba[now[mid]])start=mid+1;
                    else if(ba[g]<ba[now[mid]])en=mid-1;
                }
                now[start]=g;
                parent[g]=now[start-1];
               // cout<<"now start "<<start<< " "<<g<<endl;

                }
           }

                  // cout<<"length is "<<len+1<<endl;

                 ll c=now[len];
                  for(ll s=len;s>=0;s--)
                    {
                       ans.push_back(c);
                       c=parent[c];
                    }
        reverse(ans.begin(),ans.end());
        cout<<"Case "<<i<<":"<<endl;
        cout<<len+1<<endl;

                  for(ll d=0;d<=len;d++)
                  {
                      //printf("%lld ",ba[ans[d]]);
                      cout<<ba[ans[d]]<<" ";
                  }
                  //printf("\n");*/
        cout<<endl;


    }
    //return 0;
}

