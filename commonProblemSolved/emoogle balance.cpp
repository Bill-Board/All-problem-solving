#include<iostream>
using namespace std;
int main()
{
    int n, m, ans;
    for(int i=1;;i++)
    {
        cin>>n;
        if(n==0)
            return 0;
        ans=0;
        for(int j=1;j<=n;j++)
        {
            cin>>m;
            if(m==0)
                ans--;
            else
                ans++;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
