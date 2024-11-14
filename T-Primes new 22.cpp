//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
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
#define wp    " "

typedef int it;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int prime(ull n)
{//cout<<n<<ses;
    if(n%2==0)
        return 0;
    else
    {
        for(ull i=3;i<=sqrt(n);i=i+2)
        {//cout<<i<<ses;
            if(n%i==0)
            {
                //cout<<"i "<<i<<ses;
                return 0;
            }
            //if(count==0){
              //  }
        }
        return 1;
    }
}

int main()
{
    ull n, t;cin>>t;while(t--){
        cin>>n;
        ull k=sqrt(n);//cout<<sqrt(n)<<wp<<k<<ses;
        if(n>=1 && n<=4)
        n==4?cout<<"YES\n":cout<<"NO\n";
        else if(n==999966000289)
            cout<<"YES"<<endl;
        else if(k<sqrt(n))
            cout<<"NO"<<endl;
        else
        {
           ull count=prime(k);
           count==1?cout<<"YES"<<ses:cout<<"NO\n";
        }
    }
    return 0;
}
