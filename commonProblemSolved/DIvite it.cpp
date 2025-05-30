#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n, t, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;;i++)
        {
            if(n==1)
                {
                    cout<<i<<endl;
                    break;
                }
            else
            {
                if(n%2!=0 && n%3!=0 && n%5!=0)
                    {
                        cout<<-1<<endl;
                        break;
                    }
                else
                {
                    if(n%2==0)
                        n=n/2;
                    else if(n%3==0)
                        n=(2*n)/3;
                    else if(n%5==0)
                        n=(4*n)/5;
                }
            }
        }
    }
}

