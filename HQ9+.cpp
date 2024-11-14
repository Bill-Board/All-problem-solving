#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char p[100];
    int i=0, j, k, l;
    cin>>p;
    k=(int)strstr(p,"H");
    j=(int)strstr(p,"Q");
    l=(int)strstr(p,"9");
    if(k!=0)
        i++;
    if(j!=0)
        i++;
    if(l!=0)
        i++;
    if(i>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 return 0;
}
