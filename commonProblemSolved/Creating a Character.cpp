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

typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    //IOS
    int t,p=1;cin>>t;
    while(t--){
           v99 str,intt,exp;cin>>str>>intt>>exp;
            v99 hg=exp,lw=0,mid,i=64,ans=-2;
            if(exp==0)
            {
                if(str>intt)cout<<1<<ses;
                else cout<<0<<ses;continue;
            }
            //cout<<"lw "<<lw<<" hg"<<hg<<ses;
            while(i--)
            {
                mid=(lw+hg)/2;
                //cout<<"mid  "<<mid<<ses;
                v99 rgt=(exp-mid);//cout<<"rgt  "<<rgt<<ses;
                if(str+mid>intt+rgt)
                {
                    ans=mid-1;
                    hg=mid-1;
                }
                else lw=mid+1;
               // cout<<"lw "<<lw<<" hg"<<hg<<ses;
            }
            if(ans==-2){cout<<0<<ses;continue;}
            cout<<exp-ans<<ses;

    }
    return 0;
}



