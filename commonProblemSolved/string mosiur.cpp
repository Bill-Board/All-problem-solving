 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
#include<bits/stdc++.h>
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    v99 t;cin>>t;getchar();
    while(t--)
    {
        string s,p;
        getline(cin,s);
        for(v99 i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(p.begin(),p.end());
                cout<<p<<" ";
                p.clear();
            }
            else p+=s[i];
        }
        reverse(p.begin(),p.end());
        cout<<p<<endl;

    }
    return 0;
}


      ///  Alhamdulillah...
