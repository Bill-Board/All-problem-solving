#include<iostream>
using namespace std;
int main()
{
    int n, k=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            k++;
        if(k==1)
            {
                cout<<"Not Prime\n";return 0;
            }
    }
    cout<<"Prime\n";
    return 0;
}
