/// insertion sort
#include<iostream>
using namespace std;
int main()
{
    int a[8]={77, 33, 44, 11, 88, 22, 66, 55};
    int n=8,i,j,k,t,temp,p=1;
    for(i=0;i<n;i++)
    {
        cout<<"Pass="<<p++<<"  ";
        for(int b=0;b<n;b++)
                cout<<a[b]<<" ";
            cout<<endl;
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
            else
                break;

        }

    }
    cout<<"Sorted\t";
    for(int b=0;b<n;b++)
                cout<<a[b]<<" ";
            cout<<endl;
    return 0;
}
