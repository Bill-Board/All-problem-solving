#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[999], b[999], c[999];
    int k=0, l, x[999], y[999];
    cin>>a>>b>>c;
    strcat(a,b);
    if(strlen(a)!=strlen(c))
        {
            cout<<"NO"<<endl;
                return 0;
        }
    else
    {
        for(int i=65;i<=90;i++)
        {k=0;l=0;
            for(int j=0;j<strlen(a);j++)
            {
                if(a[j]==i)
                    k++;
                if(c[j]==i)
                    l++;
            }
            if(k!=l)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;return 0;
}
