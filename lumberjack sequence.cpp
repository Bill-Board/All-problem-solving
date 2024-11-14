#include<iostream>
using namespace std;
int main()
{
    int n, m, temp, h, l, e, a[15];
    cin>>n;e=n-1;
    while(n--)
    {
        h=0;l=0;
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
            m=temp-a[i];
            if(i!=0 && m<0)
                l++;
            else if(i!=0 && m>0)
                h++;

            temp=a[i];
        }
        if(n==e)
            cout<<"Lumberjacks:"<<endl;
        if(h==0 || l==0)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }
}
