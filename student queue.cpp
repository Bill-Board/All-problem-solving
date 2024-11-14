#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char p[100];
    int n, t, i, j,;
    cin>>n>>t;
    cin>>p;
    for(j=1;j<=t;j++)
    {
        for(i=0;i<n;i++)
        {
            if(p[i]=='B' && p[i+1]=='G')
            {
                p[i]='G';
                p[i+1]='B';
                i++;
            }
        }
    }
    cout<<p<<endl;
    return 0;
}
