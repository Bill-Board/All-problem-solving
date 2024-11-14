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
float arr[200];

int main()
{
    float j=2;
        for(int i=0;i<359;i++)
            {
                arr[i]=180-(360/j);
                j++;
            }
        sort(arr,arr+359);
    //for(int i=0;i<359;i++)
        //cout<<arr[i]<<ses;
    int t, n;cin>>t;
    while(t--)
        {
            cin>>n;
                int srt=0,endd=359,mid=(int)(srt+endd)/2;
                while(arr[mid]!=n && srt<=endd)
                {
                    //cout<<"start : "<<arr[srt]<<"  mid : "<<arr[mid]<<"  end : "<<arr[endd]<<ses;
                    if(arr[mid]<n)srt=mid+1;
                    else endd=mid-1;
                    mid=(int)(srt+endd)/2;
                }
                //cout<<"start : "<<arr[srt]<<"  mid : "<<arr[mid]<<"  end : "<<arr[endd]<<ses;
                if(srt>endd)cout<<"NO\n";
                else cout<<"YES\n";
        }
    return 0;
}


