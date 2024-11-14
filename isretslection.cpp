#include<iostream>
using namespace std;
int main()
{
    int a[9]={55, 88, 33, 11, 77, 22, 99, 66, 44};
    int n=9, i, j, k, m, t, temp;
    for(i=0;i<n;i++)
    {
        t=a[i];
        cout<<"Pass"<<i+1<<"=\t";
        for(int p=0;p<n;p++)
                cout<<a[p]<<" ";
            cout<<endl;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>t)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else
                break;
        }
    }
    cout<<"Sprted""=\t";
        for(int p=0;p<n;p++)
                cout<<a[p]<<" ";
            cout<<endl;
return 0;
}
