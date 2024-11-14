#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    unsigned long long int i, k, cunt4=0, cunt7=0;
    char a[1000];
    cin>>a;
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        if(a[i]=='4')
            cunt4++;
        else if(a[i]=='7')
            cunt7++;
    }
    //if(k==cunt4 || k==cunt7)
      //  cout<<"NO"<<endl;
    if(cunt4+cunt7==4 || cunt4+cunt7==7)
        cout<<"YES"<<endl;
    else //if(cunt4+cunt7!=4 || cunt4+cunt7!=7)
        cout<<"NO"<<endl;

}
