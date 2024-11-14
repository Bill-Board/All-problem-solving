#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    int n, m, l, p=0, q=0, r, t, a[1000], c[1000];
    set<int>b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b.insert(a[i]);
        if(l>a[i])
            l=a[i];
    }
    //cout<< "set size  "<<b.size()<<endl;
    if(b.size()!=2)
    {
        if(l!=1)
        {
        for(int i=0;i<n;i++)
            c[i]=a[i]%l;
        }
    }
    if(b.size()!=2)
        {
            for(int i=0;i<n;i++)
                {
                    if(c[i]==1)
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
        }
    else        /// 2 1 1 1 1
        {
            l=*b.end();
            m=*b.begin();
            //cout<<"set end value  "<<l<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]==l){
                    p++;
                    t=i+1;
                }
                if(a[i]==m)
                {
                    q++;
                    r=i+1;
                }

            }
            if(p==1)
                cout<<t<<endl;
            else if(q==1)
                cout<<r<<endl;



        }
    return 0;
}

