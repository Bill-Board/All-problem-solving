/**3
123 13
2 2
2000000000 2000000000*/
#include<iostream>
using namespace std;
int main()
{
    int T, a, b, c;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        if(a==b)
        {
                a=a-1;;
                b=1;
                c=1;
        }
        else
        {
            b=b-1;
            a=a-b;
            c=1;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
