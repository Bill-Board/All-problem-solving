#include<iostream>
#include<bits/stdc++.h>
#define ses "\n"
#define whp " "
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3,x,y,z,w,T;cin>>T;
    for(int i=1;i<=T;i++){
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((x1>x2) || (x1==x2 && y1>y2))
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    if((x1>x3) || (x1==x3 && y1>y3))
    {
        swap(x1,x3);
        swap(y1,y3);
    }
    if((x2>x3) || (x2==x3 && y2>y3))
    {
        swap(x2,x3);
        swap(y2,y3);
    }

    //cout<<x1<<whp<<y1<<whp<<x2<<whp<<y2<<whp<<x3<<whp<<y3<<ses;
    x=abs(x2-x1)+abs(y2-y1)+abs(x3-x2)+abs(y3-y2) +1;
    y=abs(x3-x1)+abs(y3-y1)+abs(x3-x2)+abs(y3-y2) +1;
    w=abs(x2-x1)+abs(y2-y1)+abs(x3-x2) +1;
    z=abs(x3-x1)+abs(y3-y1)+abs(y2-y1) +1;
    //cout<<x<<whp<<y<<whp<<w<<whp<<z<<ses<<y1<<whp<<y2<<whp<<y3<<ses;
    if((y3>y2 && y3>y1) || (y3<y2 && y3<y1))
        w=999999;
    //cout<<x<<whp<<y<<whp<<w<<whp<<z<<ses;
    cout<<"Case "<<i<<": "<<min(x,min(y,min(w,z)))<<ses;
    }
    return 0;
}
