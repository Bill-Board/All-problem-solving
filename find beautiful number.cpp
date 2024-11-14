#include<iostream>
using namespace std;
int main()
{
    unsigned long long int q, t;
    long int n;
    cin>>n;
    while(n--)
    {
        cin>>q;
        t=0;
        for(int i=1;i<=(q/2);i++)
        {
            if(q%i==0)
                t++;
        }
        //cout<<t<<endl;
        if(t%2!=0)
            cout<<"Beautiful"<<endl;
        else
            cout<<"Not beautiful"<<endl;
    }
    return 0;
}
