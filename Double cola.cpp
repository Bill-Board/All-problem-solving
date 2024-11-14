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
#define whp   " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{/// , Leonard, Penny, Rajesh and Howard
    string a="Sheldon",b="Leonard",c="Penny",d="Rajesh",e="Howard";
    ull n,temp;while(cin>>n){ull q=0,sum=5, i=1;
    for(ull j=1;;j++)
    {
        temp=q;q=sum;
        sum=sum+(i*2)*5;//cout<<"sum  "<<sum<<"  ,temp  :"<<temp<<"  ,q "<<q<<"\t\t"<<i<<ses;
        if(q>=n)
        {
            //i++;
            ull k=(n-temp);//cout<<k<<whp<<i<<ses;
            k%i!=0?k=k+(i-(k%i)):k=k;//cout<<k<<ses;
            k=k/i;//cout<<k<<ses;
            if(k==1)
                cout<<a<<ses;
            else if(k==2)
                cout<<b<<ses;
            else if(k==3)
                cout<<c<<ses;
            else if(k==4)
                cout<<d<<ses;
            else if(k==5)
                cout<<e<<ses;
            break;
        }i=i+i;
    }
    }
    return 0;
}







