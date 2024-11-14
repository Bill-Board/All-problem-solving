#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[1000];
    unsigned long long int i, j, k, l, cunt4=0,cunt7=0;
    cin>>a;
    k=strlen(a);
    //cout<<k<<endl;
    if(k==7 || k==4)
    {
        for(i=0;i<k;i++)
            {
                if(a[i]=='4'){
                    cunt4++;
                    continue;
                }
                else if(a[i]=='7'){
                    cunt7++;
                    continue;
                }
            }
        if(cunt7==k || cunt4==k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
    {
        for(i=0;i<k;i++)
        {
            if(a[i]=='4'){
                cunt4++;
                continue;
            }
            else if(a[i]=='7'){
                cunt7++;
                continue;
            }
        }
        if(cunt7==k || cunt4==k)
            cout<<"NO"<<endl;
        else if(cunt4+cunt7==4 || cunt4+cunt7==7)
            cout<<"YES"<<endl;
        else if(cunt4+cunt7!=4 || cunt4+cunt7!=7)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    //cout<<cunt4<<endl<<cunt7<<endl;
    return 0;
}
