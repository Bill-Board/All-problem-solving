//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....
#define vc    vector<char>
#define vi    vector<int>
#define vs    vector<string>
#define dqi   deque<int>
#define dqc   deque<char>
#define lii   list<int>
#define lic   list<char>
#define pb    push_back
#define pf    push_front
#define pff() pop_front()
#define pbb() pop_back()

//Container Adaptors : queue,priority_queue, stack....
#define sti   stack<int>
#define stc   stack<char>

//Associative Containers : map,set....
#define mpll  map<long long ,long long>
#define mps   map<string,string>
#define si    set<int>
#define sc    set<char>
#define msi   multiset<int>

#define ses   "\n"
#define whp   " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
string ai,bi,lec[9999],com[9999], ans[9999];
vi a;
int n,m,k=1;
int main()
{
    cin>>n>>m;a.push_back(0);
    lec[0]=" ";com[0]=" ";ans[0]=" ";
    for(int i=1;i<=m;i++)
        {
            cin>>ai>>bi;
            lec[k]=ai;k++;lec[k]=bi;k++;
            if(ai.size()<bi.size())
            {
                a.push_back(1);
                a.push_back(0);
            }
            else if(ai.size()>bi.size())
            {
                a.push_back(0);
                a.push_back(1);
            }
            else
            {
                a.push_back(1);
                a.push_back(0);
            }
        }
    //for(int i=1;i<=2*m;i++)
      //  cout<<lec[i]<<ses;
    //cout<<lec[1].size()<<ses;
    for(int i=1;i<=n;i++)
        cin>>com[i];
    for(int i=1;i<=2*m;i=i+2)
    {


    }
    //for(int i=1;i<a.size();i++)
        //cout<<a[i]<<whp;
    //cout<<ses;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*m;j++)
        {
            if(com[i]==lec[j])
            {
                if(j%2==0)
                {
                    if(a[j]==1)ans[i]=lec[j];
                    else ans[i]=lec[j-1];
                }
                else
                {
                    if(a[j]==1)ans[i]=lec[j];
                    else ans[i]=lec[j+1];
                }
            }
        }

    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<whp;
    cout<<ses;







    return 0;
}


