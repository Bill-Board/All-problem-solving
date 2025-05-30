#include<iostream>
using namespace std;
int main()
{
    long int t, n, i=2, sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {i=2;n--;
            while(n--)
            {
                sum=sum+i;
                i=i+4;
                //cout<<"Sum  : "<<sum<<endl;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
