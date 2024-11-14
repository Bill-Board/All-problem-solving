#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[1000], b[1000], c[1000];
    int i, j, k;
    cin>>a>>c;
    k=strlen(a);
    j=k-1;
    for(i=0;i<k;i++)
    {
        b[i]=a[j];
        j--;
    }
    b[i]='\0';
    if(strcmp(b,c)==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
