#include<iostream>
using namespace std;
int main()
{
    int n, i, k=0, p, q;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p>>q;
        if((q-p)>=2)
            k++;
    }
    cout<<k<<endl;
return 0;
}
