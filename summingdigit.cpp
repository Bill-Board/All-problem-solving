#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    unsigned long long int n;
    int sum, m;
    while(1)
    {
        cin>>n;
        if(n==0)
            return 0;
        else if(n<10)
            sum=n;
        else
        {

            while(n>9)
            {
                sum=0;
                for(int i=1;;i++)
                {
                    if(n>9){
                    m=n%10;
                    n=n/10;
                    sum=sum+m;
                    }
                    else
                    {
                        m=n;
                        sum=sum+m;
                        break;
                    }
                }
                n=sum;
            }
        }
        cout<<sum<<endl;
    }
}
