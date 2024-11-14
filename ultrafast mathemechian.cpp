#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[200], b[200];
    cin>>a>>b;
    int k=strlen(a);
    for(int i=0;i<k;i++)
    {
        if(a[i]==b[i])
            a[i]='0';
        else
            a[i]='1';
    }
    cout<<a<<endl;
    return 0;
}
