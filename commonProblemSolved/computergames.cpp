#include<iostream>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        cout << n*3+min((n-k),(k-1)) <<endl;
    }
    return 0;
}
