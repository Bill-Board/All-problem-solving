#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j, num, m, n, p;
    char a[10];
    cin>>num;
    for(j=num+1;;j++)
    {
        n=j;
        a[4]='\0';
       for(i=3;i>=0;i--)
        {
            m=n%10;
            a[i]=48+m;
            n=n/10;
        }
        if(a[0]!=a[1] && a[1]!=a[2] && a[2]!=a[3] && a[3]!=a[0] && a[0]!=a[2] && a[1]!=a[3])
        {
            cout<<a<<endl;
            return 0;
        }
    }
}
