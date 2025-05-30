#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int k=0;
    char a[9999], b[9999];
    cin>>a;
    strlwr(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
            continue;
        else
        {
            b[k]=a[i];k++;
        }
    }
    b[k]='\0';
for(int i=0;b[i]!='\0';i++)
    cout<<"."<<b[i];
cout<<endl;
}
