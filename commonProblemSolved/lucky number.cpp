#include<iostream>
#include<string>
using namespace std;
int main()
{
    unsigned long long int n, i, j, m=10;
    char p[1000];
    cin>>n;
    for(i=0;n<=10;i++)
    {
        n=j;
        p[i]= (n%10) + 48;
        n=j-n;
    }

    cout<<p<<endl;
    return 0;
}
