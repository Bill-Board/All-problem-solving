//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;
int a[] = {5,7,23,45,56,67,78,124,132,165};

class person{
public:
    void okah(){
        cout << "person\n";
    }
};

class  teacher: public person{
public:
    void okah(){
        cout << "teacher\n";
    }
};
void solve(int tc)
{
    person *p ;
    teacher t;
    p = &t;
    p->okah();
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
