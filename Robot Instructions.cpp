#include<iostream>
using namespace std;
int main()
{
    char a[1000], b[9999];
    int n, i, T, j, k=0;
    cin>>T;
    while(T--)
        {
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>a;
                b[i]=a[0];
                if(a[0]=='S')
                {
                   cin>>a;cin>>j;
                }
                if(b[i]=='S')
                {
                    b[i]=b[j-1];
                }
                //cout<<b<<endl;
            }
            b[i]='\0';
            for(j=0;j<i;j++)
            {
                if(b[j]=='L')
                    k--;
                else
                    k++;
            }
            cout<<k<<endl;
            k=0;
        }
    return 0;
}
