#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,n;
    cin>>n;
    for(i=1;i<=n;i++){

        cin>>a>>b>>c;

        if((a>b||a>c)&&(a<c||a<b))
            cout<<"Case "<<i<<": "<<a;

        else if((b>a||b>c)&&(b<c||b<a))
            cout<<"Case "<<i<<": "<<b;

        else
            cout<<"Case "<<i<<": "<<c;

        cout<<endl;
    }

        return 0;
}

