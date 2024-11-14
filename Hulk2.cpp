#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char a[99999];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            strcat(a,"I hate ");
        }
        else if(i%2==0)
        {
            strcat(a,"that I love ");
        }
        else
            strcat(a, "that I hate ");
    }
    strcat(a, "it");
    cout<<a<<endl;
    return 0;
}
