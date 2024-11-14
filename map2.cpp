#include <bits/stdc++.h>
using namespace std;
void add_value(map<int,int> &m,int x,int y);
int find_value(map<int,int> &m,int x);
void print_contents(map<int,int> &m);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		map<int,int> m;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x,y;
				cin>>x>>y;
				add_value(m,x,y);
			}
			else if(c=='b')
			{
				int y;
				cin>>y;
				cout<<find_value(m,y)<<" ";
			}
			else if(c=='c')
			{
				print_contents(m);
			}



		}
		m.clear();
cout<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* Adds a value with key x and value y to the map*/
#include <iterator>
void add_value(map<int,int> &m,int x,int y)
{
    //Your code here
    m[x]=y;
}
/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  //Your code here
  if(m.count(x)>0){int a=m[x];return a;}
  else return -1;
}
/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();++it)
    {
        cout<<it->first<<" "<<it->second<<" ";
    }
    //cout<<endl;
   //Your code here
}
