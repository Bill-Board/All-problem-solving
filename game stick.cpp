#include<iostream>
using namespace std;
int main()
{
    int m, n, l;
    l=99999;
    cin>>n;
    if(l>n)
        l=n;
    cin>>m;
    if(l>m)
        l=m;
    if(l%2==0)
        cout<< "Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
    return 0;
}
