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
int prime1(ull n)
{
    ull count=0;//cout<<n/2<<endl;
    if(n!=4 && n%2==0){
        count=2;//cout<<"if "<<n<<ses;
        }
    else if(n==4){
        count=1;//cout<<"if "<<n<<ses;
        }
    //if(n%2==0)k=2;
    else
    {cout<<"else "<<n<<ses;
        for(ull i=3;i<=n/2;i=i+2)
        {//cout<<"i1  "<<i<<ses;
            if(n%i==0){//cout<<"i2  "<<i<<endl;
                count++;//cout<<"i "<<i<<ses;
               }
            if(count==2)
                return count;

        }
    }
        return count;

}
int prime(ull n)
{
    if(n%2==0)
        return 0;//cout<<n<<ses;
    else
    {
        for(ull i=3;i<=sqrt(n);i=i+2)
        {cout<<i<<ses;
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
    ull n,t,e ,count;cin>>t;
    while(t--){
    cin>>n;
    e=sqrt(n);//cout<<e<<" "<<ses;
    if(n==e*e && n>4)
    {n=e;cout<<e*e<<wp<<n<<ses;
    count=prime(n);
    }
    else count=prime1(n);//cout<<count<<ses;
    count==1?cout<<"YES"<<ses:cout<<"NO"<<ses;}
    return 0;
}













