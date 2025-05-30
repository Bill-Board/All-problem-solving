#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
int main()
{
    v99 n;cin>>n;v99 a[2*n];
    map<v99,v99>mpp;
    for(v99 i=0;i<2*n;i++){cin>>a[i];mpp[a[i]]++;}
    sort(a,a+2*n);
    if(mpp.size()==1)cout<<-1<<endl;
    else {for(auto i:a)cout<<i<<" ";cout<<endl;}
    return 0;
}
