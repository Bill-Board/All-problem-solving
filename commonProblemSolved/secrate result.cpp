#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n, k;
    char a[99999];
    cin>>n;
    while(n--)
    {
        cin>>a;
        k=strlen(a);
        if(k<3)
            {
                if(a[0]=='1' || a[0]=='4' || (a[0]=='7' && a[1]=='8'))
                    cout<<"+"<<endl;
                else
                    cout<<"?"<<endl;
            }
        else
        {
            if(a[k-2]=='3' && a[k-1]=='5')
                cout<<"-"<<endl;
            else if(a[0]=='9' && a[k-1]=='4')
                cout<<"*"<<endl;
            else
                cout<<"?"<<endl;
        }
    }
    return 0;
}
