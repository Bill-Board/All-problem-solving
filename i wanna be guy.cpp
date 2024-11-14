#include<iostream>
using namespace std;
int main()
{
    int n, p, i, k=0, j, a[1000];
    cin>>n>>p;
    for(i=0;i<p;i++)
        cin>>a[i];
    cin>>p;
    for(j=i;j<i+p;j++)
        cin>>a[j];
    if(j==0)
        cout<<"Oh, my keyboard!"<<endl;
    else
        {
            for(i=1;i<=n;i++)       /// 1 2 3 2 4 ,j=5;
                {
                    k=0;
                    for(p=0;p<j;p++)
                    {
                        if(i!=a[p])
                            k++;
                        if(k==j)
                        {
                            cout<<"Oh, my keyboard!"<<endl;
                            return 0;
                        }
                    }
                }
                cout<< "I become the guy."<<endl;
        }
    return 0;
}
