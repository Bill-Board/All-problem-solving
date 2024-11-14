//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Sequence Containers : vector,deque,list....
#define vc    vector<char>
#define vi    vector<int>
#define vll   vector<long long>
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
    int t;scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int n, q;scanf("%d%d",&n,&q);
        vi a;
        for(int i=0;i<n;i++)
        {
            int  z;scanf("%d",&z);
            a.push_back(z);
        }
        vector<int> ::iterator lower,upper;
        printf("Case %d:\n",j);
        //IOS
        while(q--){
        int x,y,ansl,ansu;scanf("%d%d",&x,&y);

        lower=lower_bound(a.begin(),a.end(),x);
        upper=upper_bound(a.begin(),a.end(),y);
        /**
            jodi array hoi taile evave korte hbe
            a = lower_bound(arr,arr+n,x)-arr;
            b = upper_bound(arr,arr+n,y)-arr;
        */
        ansl=(lower-a.begin())+1;
        ansu=(upper-a.begin());
        //printf("%d\n%d\n",ansl,ansu);
        printf("%d\n",ansu-ansl+1);
        }
    }

    return 0;
}

