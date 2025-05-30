#include<bits/stdc++.h>
#include<vector>
#include<string>
#define whp " "
#define ses "\n"
#define tab "\t"
using namespace std;
int main()
{
    vector<int>a;
    for(int i=1;i<=5;i++)a.push_back(i);
    vector<int>::iterator it;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<tab;
    puts(" ");
    //it=a.begin();
    for(int it=a.begin();it!=a.end();++it)
        cout<<*it<<ses;
    puts(" ");
    //cout<<ses;
    return 0;
}
