#include<iostream>
using namespace std;
int prime(int n)
{
    int k=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            k++;
        if(k==1)
            {
                return 1;
            }
    }
    return 0;
}
int main()
{
    int n, x, y;
    cin>>n;
        for(int i=(n/2)+1;i<n;i++)
        {
            for(int j=1;j<=(n/2);j++)
            {
                if((i+j)==n)
                {
                    x=prime(i);
                    y=prime(j);
                    //cout<<"x : "<<x<<"  y: "<<y<<"  i : "<<i<<"  j: "<<j<<endl;
                    if(x==1 && y==1)
                    {
                        cout<<i<<" "<<j<<endl;
                        return 0;
                    }
                }
            }
        }
}
