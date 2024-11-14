//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
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
    string a;int sum=0,m=1,x=0;cin>>a;
    for(int i=a.size()-1;i>=0;i--)
    {
        x+=(a[i]-'0')*m;
        m*=10;
    }
    //cout<<x<<ses;m=x;
    for(int j=x;;j++)
    {
        sum=0;int d=j;
        string b;
        for(int i=0;d!=0;i++)
        {
            b.push_back(d%10+'0');
            d/=10;
            //cout<<d<<ses;
        }
        reverse(b.begin(), b.end());
        //cout<<b<<ses;
        for(int i=0;i<b.size();i++)
        {
            sum+=b[i]-'0';

        }
        if(sum%4==0)
            {
                cout<<j<<ses;return 0;
            }
    }
    return 0;
}



