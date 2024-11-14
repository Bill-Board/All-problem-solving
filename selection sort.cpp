#include<iostream>
using namespace std;
int main()
{
    int a[8]={77, 33, 44, 11, 88, 22, 66, 55};
    int n=8, i, j, ps=1, loc, temp, m, q;
    for(i=0;i<n-1;i++)
    {
        q=0;
        m=999999;
        for(j=i;j<n;j++)
        {
            if(a[j]<m)
            {
                m=a[j];
                loc=j;
                q=1;
            }
        }
        cout<<"Pass="<<ps++<<",LOC="<<loc+1<<" :   ";
        for(int s=0;s<n;s++)
            cout<<a[s]<<" ";
        cout<<endl;
        if(q==1)
        {
                temp=a[i];
                a[i]=a[loc];
                a[loc]=temp;
        }
    }
    cout<<"\nSorted\t\t";
    for(int s=0;s<n;s++)
        cout<<a[s]<<" ";
    cout<<endl;
return 0;
}
