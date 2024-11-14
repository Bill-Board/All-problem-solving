#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int t=0;
        for(int j=1;j<=m;j++)
        {

            if(i%2!=0)
                cout<<"#";
            else if(i%4==0 && j==1 && t==0)
                {
                    cout<<"#";
                    t=1;
                }
            else if(i%2==0 && j==m && t==0)
                cout<<"#";
            else
                cout<<".";
        }
        cout<<endl;
    }
    return 0;
}
