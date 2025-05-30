#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        string b=a;
        reverse(b.begin(),b.end());
        b.erase(b.begin());
        //cout<<b<<endl;
        //b[b.size()-1]='\0';
        char c=a[0];
        //int k=0,
        int countt=0;
        //cout<<a.size()<<endl;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]==c)countt++;
        }

        if(countt==a.size())
            cout<<a<<" "<<c<<endl;
        else
            cout<<a<<" "<<b<<endl;
    }
    return 0;
}
