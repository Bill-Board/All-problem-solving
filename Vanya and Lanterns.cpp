#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    unsigned long long int n, k=1, f=1, temp, l, i, j, a[99999];
    long double d, h=0, c;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            k=0;
        if(a[i]==l)
           f=0;
    }
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
    }cout<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(i=0;i<n-1;i++)
    {
        c=a[i+1]-a[i];
        cout<<"c   "<<c<<endl;
        if(h<c)
            h=c/2;
    cout<<"h  "<<showpoint<<setprecision(11+11)<<h<<endl;}
    if(h<a[0])
        {
            h=a[0];
            j=0;
        }cout<<"\n\nh  "<<showpoint<<setprecision(11+11)<<h<<endl;
    if(h<(l-a[n-1]))
        {

            h=l-a[n-1];
            i=0;
            cout<<"a  "<<l-a[n-1]<<"\n";
        }

    cout<<"h  "<<showpoint<<setprecision(11+11)<<h<<endl<<j<<endl;
    if(j!=0)
        h=h/2;
    if(i!=0)
        h=h/2;
    j=0;
    i=(int)h;
        while(i!=0)
        {
            i=i/10;
            j++;
        }
        cout<<"1     "<<showpoint<<setprecision(j+10)<<h<<endl;
    return 0;
}
