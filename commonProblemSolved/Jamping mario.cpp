#include<iostream>
using namespace std;
int main()
{
    int t, n, a, h, l, temp;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        h=0;l=0;
        cin>>n>>a;
        temp=a;n--;
        while(n--)
        {
            cin>>a;
            if(temp<a)
                h++;
            else if(temp>a)
                l++;
            temp=a;
        }
        cout<<"Case "<<i<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
