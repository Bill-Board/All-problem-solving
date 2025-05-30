#include<iostream>
using namespace std;
int main()
{
    int n, t, q, j;
    int a[100000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>t;
    while(t--)
    {
        cin>>q;
        j=0;
        for(int i=0;i<n;i++){
            if(q<a[i])
                j++;
        }
        cout<<j<<endl;
    }
    return 0;
}
