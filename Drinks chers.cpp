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

///typedef int it;
///it midle(it a, it b,it c,it l, it h);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int n, k, y=0, x, a[1000], b[1000];cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<ses;

    for(int i=0;i<n;i++)
    {x=0;cout<<"i1 "<<i<<endl;
        for(int j=i;j<n;j++)
        {//cout<<"a[i] "<<a[i]<<"  a[j] "<<a[j]<<ses;cout<<"j  "<<j<<"  n "<<n<<ses;


            if(a[i]==a[j])
                x++;
            else
            {
                b[y]=x;
                i=j-1;
                //cout<<"i  "<<i<<"x  "<<x<<ses;
                y++;
                break;
            }
            if(j==(n-1))
            {
                b[y]=x;
                i=j-1;
                //cout<<"i  "<<i<<"x1  "<<x<<ses;
                y++;i=999999;
                break;
            }
        }//cout<<x<<ses<<ses<<ses<<ses;
        if(i==999999) break;
    }//b[y]=x;y++;cout<<x<<ses;
    for(int i=0;i<y;i++)
        cout<<b[i]<<" ";
    cout<<ses;
    sort(b,b+y);sort_heap(b,b+y);
    for(int i=0;i<y;i++)
        cout<<b[i]<<" ";
    int s=n%2==0?n/2:n/2+1;
    cout<<s<<ses;
    int sum=0,total=0;
    for(int i=y-1;i>=0;i--)
    {sum=0;
        for(int j=1;j<s;j++)
        {

        }
    }


    cout<<ses;










    return 0;
}








