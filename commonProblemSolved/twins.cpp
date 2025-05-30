#include<iostream>
using namespace std;
int main()
{
    int n, a[100], i, j, sum=0, sum1=0, temp;;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sum=sum/2;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
        sum1=sum1+a[i];
        j++;
        if(sum1>sum)
            {
                cout<<j<<endl;
                return 0;
            }
    }
}
