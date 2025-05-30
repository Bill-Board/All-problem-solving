#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    unsigned long long int n, fs=1, ls=1, temp, l, i, j, a[99999];
    long double d, h=0, c;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            fs=0;
        if(a[i]==l)
           ls=0;
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
    }
    for(i=0;i<n-1;i++)
    {
        c=a[i+1]-a[i];
        if(h<(c/2))
            h=c/2;
    }
    //cout<<"h1  "<<showpoint<<setprecision(11+11)<<h<<endl;
    if(a[0]!=0)
    {
        c=a[0];
        if(h<c)
            h=c;//cout<<"h2  "<<showpoint<<setprecision(11+11)<<h<<endl;
    }
    if(a[n-1]!=l)
    {
        c=l-a[n-1];
        if(h<c)
            h=c;
        //cout<<"h3  "<<showpoint<<setprecision(11+11)<<h<<endl;
    }
    j=0;
    i=(int)h;
    //cout<<"i  "<<i<<endl;
        while(i!=0)
        {
            i=i/10;
            j++;
        }
    cout<<showpoint<<setprecision(j+10)<<h<<endl;
    return 0;
}
