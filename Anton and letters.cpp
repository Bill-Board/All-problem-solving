#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int k=0, p;
    char a[9999];gets(a);
    for(int i=97;i<=122;i++)   /// {a, b, c}
    {
        p=0;
        for(int j=1;a[j]!='\0';j=j+3)
        {
            if(a[j]==i)
                p++;
        }
        if(p!=0)
            k++;
    }
    cout<<k<<endl;
    return 0;
}

