#include<iostream>
using namespace std;
int main()
{
    int k, l, m, n, d, b, temp=9999;
    int i, j=0, p, a[10000];
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l==1 || m==1 || n==1 || d==1)
        j=d;
    else
    {
    for(p=1;p<=4;p++)
        {
            if(p==2)
                k=l;
            else if(p==3)
                k=m;
            else if(p==4)
                k=n;
         if(temp==k)
                goto ntr;
            temp=k;
        for(i=1;;i++)
            {
                if(k*i>d)
                    break;
                b=0;
                for(int f=0;f<j;f++)
                {
                    if(a[f]==k*i)
                    {
                        b=1;
                        break;
                    }
                }
                if(b!=1)
                {
                    a[j]=k*i;
                    j++;
                }
            }
            cout<<temp<<endl;ntr : b=0;
        }
    }
    for(i=0;i<j;i++)
        cout<<a[i]<<" ";
    cout<<endl<<j<<endl;
    return 0;
}
