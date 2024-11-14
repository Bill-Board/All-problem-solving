#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    long long sum=0,countt;
    long long a,b;
   // scanf("%d%d",&a,&b);
   cin>>a>>b;
   if(a>=b){
    cin>>s1>>s2;}
    else { cin>>s2>>s1;}
    long long t=s2.size();
    for(long long i=0;i<=s1.size()-s2.size();i++)
    {

        if((s1.compare(i,t,s2))==0)
        continue;
       // cout<<"hocche"<<endl;
        else //if((s1.compare(i,t,s2))!=0)
        {
            countt=0;
            for(long long j=i,k=0;k<t;j++,k++)
            {
                if(s1[j]!=s2[k])
                   {
                       //long long h=++countt;
                       countt++;
                    // cout<<"arekta"<<endl;
                   // cout<<"akn sumtwo "<<sum<<endl;
                   }
            }
            sum+=countt;

        }
    }
    cout<<sum<<endl;
    return 0;
}

