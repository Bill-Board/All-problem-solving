#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[1000][1000];
    int n ,m, p=0, q=0, r=0, s=0, x=0, y=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
    }
    for(int i=0;i<n;i++)
    {p=0;r=0;
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='*')
            {
                p++;
                if(p==2)
                {
                    q++;
                    if(q==2)
                    {
                        cout<<"2.NO"<<endl;return 0;
                    }
                }
                if(a[i][j]=='*' && a[i][j+1]=='.' && a[i][j+2]=='*')
                {
                    cout<<"1.NO"<<endl;return 0;
                }
                if(a[i][j-1]=='.' && a[i][j]=='*' && a[i][j+1]=='.' )
                {
                    if(a[i-1][j]=='.' || a[i+1][j]=='')
                }

            }
        cout<<"p "<<p<<endl;
        }
    }

    for(int i=0;i<m;i++)
    {r=0;
        for(int j=0;j<n;j++)
            {
                if(a[j][i]=='*')
                    {
                        r++;
                        if(r==2)
                        {
                            s++;
                            if(s==2)
                            {
                                 cout<<"3.NO  r="<<r<<endl;return 0;
                            }
                        }
                    }
            }
    }


    cout<<"Yes"<<endl;





    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}
