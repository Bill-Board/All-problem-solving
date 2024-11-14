#include<bits/stdc++.h>

using namespace std;

class Box{
    int l, b, h;
    public:
    Box(){l = b = h = 0;}
    Box(int x, int y, int z){
        l = x; b = y; h = z;
    }
    Box(const Box& a){
        l = a.l; b = a.b; h = a.h;
    }
    int getLength();
    int getBreadth ();
    int getHeight ();
    long long CalculateVolume();

    bool operator<(const Box& a);

    friend ostream& operator<<(ostream& out, const Box& a){
        out << a.l << ' ' << a.b << ' ' << a.h;
        return out;
    }
};

int Box :: getLength(){
    return l;
}
int Box :: getBreadth(){
    return b;
}

int Box :: getHeight(){
    return h;
}
long long Box :: CalculateVolume(){
    long long ans = l*b*h;
    return ans;
}
bool Box :: operator<(const Box& a){
    if(l < a.l) return true;
    if(b < a.b and l == a.l) return true;
    if(h < a.h and l == a.l and b == a.b) return true;
    return false;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
