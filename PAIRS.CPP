#include<iostream>
using namespace std;
int main()
{
    int n, m, a, b, x, y, xl, yl, ylow=0, xlow=9999;
    while(cin>>n>>m)
    {
        for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            if(i>1 && (x==a || y==a || x==b ||y==b))
               {
                   if(x==a || y==a){
                        xl=x;
                        cout<<"xl"<<endl;}
                    else if(y==b || x==b){
                        yl=y;cout<<"yl"<<endl;}
                    if(xlow>xl){
                        xlow=xl;cout<<"xlow"<<endl;}
                    if(ylow>yl){
                        ylow=yl;cout<<"ylow"<<endl;}
               }
               x=a;y=b;
        }
        cout<<xlow<<"   "<<ylow<<endl;
        if(xlow<ylow)
            cout<<"YES"<<endl;
    }
}
