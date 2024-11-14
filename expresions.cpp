#include<iostream>
using namespace std;
int main()
{
    int a, b, c, ans, h=-1;
    cin>>a>>b>>c;
    ans=a+b*c;
    if(h<ans)
        h=ans;
    ans=a*(b+c);
    if(h<ans)
        h=ans;
    ans=a*b*c;
    if(h<ans)
        h=ans;
    ans=(a+b)*c;
    if(h<ans)
        h=ans;
    ans=a+b+c;
    if(h<ans)
        h=ans;
    cout<<h<<endl;
    return 0;
}
