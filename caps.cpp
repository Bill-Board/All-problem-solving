#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char p[1000], q[1000];
    int i, j, k;
    cin>>p;
    strcpy(q,p);
    strupr(q);
    k=strcmp(p,q);
    if(k==0)
    {
        strlwr(p);
        cout<<p<<endl;
        return 0;
    }
    else
    {
        q[0]=q[0]+32;
        j=strcmp(p,q);
       if(j==0)
       {
           strlwr(p);
           p[0]=p[0]-32;
           cout<<p<<endl;
            return 0;
       }
    }
    cout<<p<<endl;
    return 0;
}
