#include<iostream>
#include<set>
#include <iterator>
using namespace std;
int main()
{
    int k, l, m, n, d, b, temp=9999;
    int i, p;//, a[10000];
    set<int>a;
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l==1 || m==1 || n==1 )
        cout<<d<<endl;
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
                a.insert(k*i);
            }
            ntr : b=0;
        }
        cout<<a.size()<<endl;
    }

    return 0;
}
