#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
	stack<char> stk;
	string str("abc");

	for(int i = 0; i < str.length(); i++)
		stk.push(str.at(i));

	string reverse;
	while(!stk.empty())
	{
		reverse.push_back(stk.top());
		stk.pop();
	}

	cout<<str<<" "<<reverse<<endl;
	return 0;
}
