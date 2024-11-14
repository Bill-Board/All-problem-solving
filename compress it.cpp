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

typedef long long ull;
typedef unsigned long long ll;
using namespace std;
int main()
{

    ull n, sze, a, b, sum1=0,sum2=0;
    vector<int>dif;
    cin>>n>>sze;ull k=n;
    while(k--)
    {
        cin>>a>>b;
        sum1+=a;sum2+=b;dif.push_back(a-b);//cout<<n<<ses;
    }
    //cout<<sum1<<whp<<sum2<<ses;
    //for(ull i=0;i<n;i++)
      //  cout<<dif[i]<<ses;cout<<ses;
    //for(ull i=0;i<n;i++)
      //  cout<<dif[i]<<ses;cout<<ses;
    if(sum1<=sze)
        cout<<0<<ses;
    else if(sum2>sze)
        cout<<-1<<ses;
    else if(sum1>sze && sum2<=sze)  /// 29 16 17
    {sort(dif.begin(),dif.end());
    reverse(dif.begin(),dif.end());
        for(ull i=0;i<dif.size();i++)
        {
            sum1-=dif[i];
            /*if(i+1==n)
            {
                cout<<-1<<ses;return 0;
            }*/
            if(sum1<=sze)
            {
                cout<<i+1<<ses;return 0;
            }
        }
    }
    else if(sum1<sze)
        cout<<0<<endl;

    return 0;
}


