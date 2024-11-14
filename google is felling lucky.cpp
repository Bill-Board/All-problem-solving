#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100]="",b[100]="",c[100]="",d[100]="",e[100]="",f[100]="",g[100]="",h[100]="";
    char p[100]="", q[100]="", s[100]="";
    int T, n, l, m[20];
    cin>>T;
    for(int i=1;i<=T;i++)
    {l=0;
        for(int j=0;j<10;j++)
        {
            cin>>s>>n;
            m[j]=n;
            if(l<n)
                l=n;
            if(j==0)
                strcat(a,s);
            else if(j==1)
                strcat(b,s);
            else if(j==2)
                strcat(c,s);
            else if(j==3)
                strcat(d,s);
            else if(j==4)
                strcat(e,s);
            else if(j==5)
                strcat(f,s);
            else if(j==6)
                strcat(g,s);
            else if(j==7)
                strcat(h,s);
            else if(j==8)
                strcat(q,s);
            else
                continue;
            if(j!=9)
                s[0]='\0';
        }
        //cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl<<q<<endl<<s<<endl;
        cout<<"Case #"<<i<<":\n";
        for(int j=0;j<10;j++)
        {
            if(l==m[j])
            {
                if(j==0)
                    cout<<a<<endl;
                else if(j==1)
                    cout<<b<<endl;
                else if(j==2)
                    cout<<c<<endl;
                else if(j==3)
                    cout<<d<<endl;
                else if(j==4)
                    cout<<e<<endl;
                else if(j==5)
                    cout<<f<<endl;
                else if(j==6)
                    cout<<g<<endl;
                else if(j==7)
                    cout<<h<<endl;
                else if(j==8)
                    cout<<q<<endl;
                else
                    cout<<s<<endl;
            }
        }
        a[0]='\0';
        b[0]='\0';
        c[0]='\0';
        d[0]='\0';
        e[0]='\0';
        f[0]='\0';
        g[0]='\0';
        h[0]='\0';
        q[0]='\0';
        s[0]='\0';
    }
    return 0;
}
