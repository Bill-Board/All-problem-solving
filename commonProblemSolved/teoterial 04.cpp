#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, arr[]={2,5,4,5,1,3,6};
    for(i=0;i<7;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr,arr+7);
    for(i=0;i<7;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
