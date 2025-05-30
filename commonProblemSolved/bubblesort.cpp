#include<iostream>
using namespace std;
int main()
{
    int i, j, k, m, temp,  n=8;
    int a[8]={55, 88, 33, 11, 77, 22, 66, 44};
    for(k=0;k<n;k++)
    {
        m=0;
        for(i=0,j=i+1;i<n-1;i++,j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            if(m==0)
            {
                cout<<"pass: "<<k+1<<endl;
                m=1;
            }
            for(int p=0;p<n;p++)
                cout<<a[p]<<" ";
            cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
