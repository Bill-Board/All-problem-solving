#include<iostream>
using namespace std;
int main()
{
    int n, a, x, b, y, i, j;
    while(cin>>n>>a>>x>>b>>y)
    {
        if(a==b || x==y)
            cout<<"YES"<<endl;
        else
        {
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

                if(i==n)
                    i=0;
                if(j==1)
                    j=n+1;

            }
        }

    }
}
