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
{
    //ofstream myfile;d
    //myfile.open("Machined Surfaces file.txt");

    int row,i,j,count=0;
    while(cin>>row)
    {
        if(row==0)return 0;/// eta hoise row 0 paile program return korbe.

        string s;getchar();
        int sum=0, l=9999999;/// totalspace tai sum. ar l hoise lowest space.

        for(i=1;i<=row;i++)
        { getline(cin,s);
        //cout<<s<<endl;

           count=0;
            for(j=0;j<26;j++)
            {
                if(s[j]==' ')
                {
                    count++;
                }
            }
            //cout<<"count "<<count<<ses;
            //cout<<count;
            sum=sum+count;
            if(l>count)///   lowst value define;
                l=count;
            //cout<<"lowest "<<l<<ses;
           // cout<<totalspace;

        }
// cout<<totalspace;
        //cout<<"sum "<<sum<<ses;
        if(sum==0)///
            cout<<0<<ses;
        else if((l*row)==sum)
            cout<<0<<ses;
        else
            cout<<sum-(l*row)<<ses;
    }
}




