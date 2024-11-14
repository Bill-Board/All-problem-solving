#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    int i, n;
    for(i=1;;i++)
        {
            cin>>a;
            if(strcmp(a,"#")==0)
                return 0;
            else if(strcmp(a,"HELLO")==0)
                cout<<"Case "<<i<<": ENGLISH"<<endl;
            else if(strcmp(a,"HOLA")==0)
                cout<<"Case "<<i<<": SPANISH"<<endl;
            else if(strcmp(a,"HALLO")==0)
                cout<<"Case "<<i<<": GERMAN"<<endl;
            else if(strcmp(a,"BONJOUR")==0)
                cout<<"Case "<<i<<": FRENCH"<<endl;
            else if(strcmp(a,"CIAO")==0)
                cout<<"Case "<<i<<": ITALIAN"<<endl;
            else if(strcmp(a,"ZDRAVSTVUJTE")==0)
                cout<<"Case "<<i<<": RUSSIAN"<<endl;
            else
                cout<<"Case "<<i<<": UNKNOWN"<<endl;
        }
}
