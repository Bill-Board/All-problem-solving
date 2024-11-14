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



// function to print the divisors
void printDivisors(int n)
{
    for (int i=2;i<n;i++)
        if (n%i==0)
            printf("%d ",i);
}

/* Driver program to test above function */



int main()
{
    long long int t,k,n,i,j;

    cin>>t;

    for(i=1; i<=t; i++){
        cin>>k;

        int a[k];
        for(j=0; j<k; j++){
            cin>>a[j];
        }

        for(j=0; j<k; j++){
        sort(a, a+k);
        if(k==1){
            n=a[0]*a[0];
        }
        if(k>1){
            n=a[0]*a[k-1];
        }
    }
    cout<<"Case "<<i<<": "<<n<<endl;
    for(int j1=0; j1<k-1; j++){
        a[j1]=0;
    }
    }

    return 0;
}
