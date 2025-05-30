#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j=0, k, m, n;
    char a[200], b[200]="";
    cin>>a;k=strlen(a);
    for(i=0;i<k;i++)
    {
        ptr : n=0;
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            if(strlen(b)!=0)
            {
                if(b[j-1]!=' ')
                {
                    b[j]=' ';
                    j++;
                }
            }
            i=i+3;
            goto ptr;
        }
        else
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    cout<<b<<endl;
    return 0;
}
