#include<iostream>
using namespace std;
int main()
{
    int T, n, a, k, summ, sumj;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>n;
        summ=0;sumj=0;
        while(n--)
        {
            cin>>a;
            summ=summ+(a/30 + 1);
            sumj=sumj+(a/60 + 1);
        }
        summ=summ*10;
        sumj=sumj*15;
        if(sumj==summ)
            cout<<"Case "<<i<<": Mile Juice "<<sumj<<endl;
        else if(summ<sumj)
            cout<<"Case "<<i<<": Mile "<<summ<<endl;
        else
            cout<<"Case "<<i<<": Juice "<<sumj<<endl;
    }
    return 0;
}
