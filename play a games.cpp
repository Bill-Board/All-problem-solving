#include<iostream>
using namespace std;
int main()
{
    unsigned long long int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%3==0 && n%9==0)
            cout<<"No One"<<endl;
        else if(n%3==0)
            cout<<"Shifa"<<endl;
        else
            cout<<"No One"<<endl;
    }
    return 0;
}
