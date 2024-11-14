#include<iostream>
using namespace std;
int main()
{
    int n, a, x, b, y, i, j, k=0, m;
    while(cin>>n>>a>>x>>b>>y)
    {
        if(a==b || x==y)
            cout<<"YES"<<endl;
        else
        {
            ptr : m=0;
            if(k==1)
            {
                a=1;b=n;k=0;
            }
            for(i=a,j=b;;i++,j--)
            {
                cout<<i<<"   "<<j<<endl;
                if(i==j)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                if(i==x || j==y)
                {
                    cout<<"NO"<<endl;
                    break;
                }

                if(i==n && j==1)
                {
                    k=1;
                    goto ptr;
                }
                else if(i==n)
                    i=0;
                else if(j==1)
                    j=n+1;

            }
        }

    }
}
