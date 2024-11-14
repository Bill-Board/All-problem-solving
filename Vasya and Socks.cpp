#include<iostream>
using namespace std;
int main()
{
    int n, m, count;
    cin>>n>>m;
    count=n;
    count=count+n/m;//cout<<count<<endl;
    while(1)
    {
        //cout<<"count-n   "<<count-n<<endl;
        int temp=count;
        if(((count-n)+(n%m))>=m)
        {
          //  cout<<n%m<<endl;
            count=count+((count-n)+(n%m))/m;
            //cout<<"count 1  "<<count<<endl;
        }
        else
        {
            count%m==0?cout<<count+1<<endl:cout<<count<<endl;
            return 0;
        }
        n=temp;
    }
  return 0;
}
