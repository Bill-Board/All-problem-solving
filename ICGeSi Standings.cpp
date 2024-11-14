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

int main()
{
    ll t,tn,id,s,tp,fs,k,high=0;
    int arra[100][60];
    vi ran;
    cin>>tn;
    for(ll i=0;i<tn;i++)
    {
        for(ll j=0;j<60;j++)
        {
            cin>>arra[i][j];
            if(j==3)
            {
                int f=j;
                for(k=0;k<arra[i][j];k++)
                {
                    f++;
                    cin>>arra[i][f];
                }
                cout<<k<<whp;
                if(high<k)high=k;
                cout<<high<<ses;
                break;
            }

        }
    }int col=4+high;
    for(int i=0;i<tn;i++)
    {
        int x;cin>>x;ran.push_back(x);
    }
    for(int i=0;i<tn;i++)
    {
        for(int j=0;j<tn;j++)
        {
            if(arra[j][0]==ran[i])
            {
                int es=arra[j][1]+arra[j][3];
                for(int q=0;q<tn;q++)
                {
                    if()
                }
            }
        }
    }






    for(ll i=0;i<tn;i++)
    {
        for(ll j=0;j<col;j++)
            cout<<arra[i][j]<<" ";
        cout<<ses;
    }




    return 0;
}



