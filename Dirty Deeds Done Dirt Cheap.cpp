#include<iostream>
using namespace std;
int main()
{
    int n, a, b, i=0, j=0, p=0, q=0 , d[10000], c[10000];
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
        {
            c[i]=a;
            i++;
            c[i]=b;
            i++;
        }
        else
        {
            d[j]=a;
            j++;
            d[j]=b;
            j++;
        }
    }
    for(int k=0;k<i;k++)
        cout<<c[k]<<" ";
    cout<<endl;
    for(int k=0;k<j;k++)
        cout<<d[k]<<" ";
    cout<<endl;
}
