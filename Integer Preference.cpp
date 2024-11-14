#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a>c)swap(a,c),swap(b,d);
  if(a<=c and c<=b)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
