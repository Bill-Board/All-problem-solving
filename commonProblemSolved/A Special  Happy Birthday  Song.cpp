#include<iostream>
#include<cstring>
using namespace std;
int main()

{
    char a[100],b[99999];
    int n, m, k=1, c[1000];
    cin>>n;
    m=(n/16);c[0]=0;
    (n%16==0)?m=m:m++;
    while(n--)
    {
        cin>>a;
        strcat(b,a);
        if(n!=0)
            strcat(b," ");
        a[0]='\0';
    }
    //cout<<m<<endl<<b<<endl;
    for(int i=0;b[i]!='\0';i++)
    {
        if(b[i]==' ')
            {
                c[k]=i+1;
                k++;
            }

    }n=strlen(b);b[n]=' ';b[n+1]='\0';
    n=0;
    while(m--)
    {
        for(int i=1;i<=16;i++)
        {
            for(int x=c[n];b[x]!=' ';x++)
            {
                cout<<b[x];
            }
            //cout<<"\nn  "<<n<<endl;
            n++;
            if(n==k)
                n=0;
            if(i==1)
                cout<<": Happy\n";
            else if(i==2)
                cout<<": birthday\n";
            else if(i==3)
                cout<<": to\n";
            else if(i==4)
                cout<<": you\n";
            else if(i==5)
                cout<<": Happy\n";
            else if(i==6)
                cout<<": birthday\n";
            else if(i==7)
                cout<<": to\n";
            else if(i==8)
                cout<<": you\n";
            else if(i==9)
                cout<<": Happy\n";
            else if(i==10)
                cout<<": birthday\n";
            else if(i==11)
                cout<<": to\n";
            else if(i==12)
                cout<<": Rujia\n";
            else if(i==13)
                cout<<": Happy\n";
            else if(i==14)
                cout<<": birthday\n";
            else if(i==15)
                cout<<": to\n";
            else
                cout<<": you\n";

        }
    }
    return 0;
}





















