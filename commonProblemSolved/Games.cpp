#include<iostream>
using namespace std;
int main()
{
    int k, m=0, n, a[99999];
        cin>>n;
        for(int i=0;i<2*n;i++)
            cin>>a[i];
        for(int i=0,k=i+1;i<2*(n-1);i+=2,k+=2)
        {
            for(int j=i+3;j<2*n;j+=2)
            {
                if(a[i]==a[j])
                        m++;
                if(a[k]==a[j-1])
                        m++;
            }
        }
        cout<<m<<endl;
    return 0;
}
/**4
100 42
42 100
5 42
100 5
.
.
output 5
*/
