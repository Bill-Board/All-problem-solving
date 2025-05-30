#include<iostream>
using namespace std;
int main()
{
    long int n, b, h, w, p, x=0, y, a;
    while(cin>>n>>b>>h>>w){
        y=99999999;
        for(int i=0;i<h;i++)
        {
            cin>>p;
            for(int j=0;j<w;j++){
                cin>>a;
                //x=0;
                if(a>=n)
                {
                    x=p*n;
                    if(y>x)
                        y=x;
                }
            }
        }
        if(y<=b)
            cout<<y<<endl;
        else
            cout<<"stay home"<<endl;
    }
    return 0;
}
