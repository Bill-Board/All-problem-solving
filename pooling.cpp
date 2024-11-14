/// first of all, tumi pooling ta google korte paro, than code ta dekhba
/// amr soluton eta, etaii hower kotha, ami sure na......
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;  /// n hoise nXn array matrix r size;
    int i,a[4][4]={15,9,4,2,
                   11,5,8,6,
                   8,7,3,7,
                   2,3,7,3};
    int sum1mx=-1,sum2mx=-1,sum3mx=-1,sum4mx=-1,sum1av=0,sum2av=0,sum3av=0,sum4av=0;
    int len=sqrt(n);///  ekhane tumi input nite paro, array to jot niba toto;
    /// ekhane 4 ta loop gurbe, amar 4 ta valueiii lagbe;
    /// tumi pooling nie google search dite paro...tarpor eta bujba
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            sum1av+=a[i][j];
            sum1mx=max(sum1mx,a[i][j]);
        }
    }
    for(int i=0;i<len;i++)
    {
        for(int j=len;j<n;j++)
        {
            sum2av+=a[i][j];
            sum2mx=max(sum2mx,a[i][j]);
        }
    }
    for(int i=len;i<n;i++)
    {
        for(int j=0;j<len;j++)
        {
            sum3av+=a[i][j];
            sum3mx=max(sum3mx,a[i][j]);
        }
    }

    for(int i=len;i<n;i++)
    {
        for(int j=len;j<n;j++)
        {
            sum4av+=a[i][j];
            sum4mx=max(sum4mx,a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<endl<<"Max pooling:"<<endl;
    cout<<sum1mx<<" "<<sum2mx<<endl<<sum3mx<<" "<<sum4mx;
    cout<<endl<<endl<<"Avarage pooling:"<<endl;
    cout<<(int)sum1av/len<<" "<<(int)sum2av/len<<endl<<(int)sum3av/len<<" "<<(int)sum4av/len<<endl;
    return 0;
}
/// happy cooding 😘😘😘😘😍😍😍😍
