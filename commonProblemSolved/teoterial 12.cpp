#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int[4];
    ptr[1]=8;
    cout<<ptr[1]<<endl;
    cout<<*(ptr+1)<<endl;
    delete [] ptr;
    return 0;
}
