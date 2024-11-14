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

class number{
///private:

private:
    int x, y;
public:
    number(){x = 0; y = 0;}
    number(int a, int b){x = a; y = b;}
    void getnum(int &a, int &b){a = x; b = y;}
    void p(){cout << x << " " << y << '\n';}
    number operator +(number ob);
//    {
//        number tmp;
//        tmp.x = x + ob.x;
//        tmp.y = y + ob.y;
//        return tmp;
//    }
    number operator -(number ob);
    bool operator >(number ob);
    bool operator <(number ob);
    bool operator <=(number ob);
    bool operator >=(number ob);
    bool operator ==(number ob);
    number operator ++();
    number operator ++(int a);


};
number number :: operator ++(){
    x = x + 1;
    y = y + 1;
    number tmp;
    tmp.x = x; tmp.y = y;
    return tmp;
}
number number :: operator ++(int a){
    number tmp;
    tmp.x = x; tmp.y = y;
    x = x + 1;
    y = y + 1;
    return tmp;
}
number number :: operator + (number ob){
    number tmp;
        tmp.x = x + ob.x;
        tmp.y = y + ob.y;
        return tmp;
}
number number :: operator - (number ob){
    number tmp;
        tmp.x = x - ob.x;
        tmp.y = y - ob.y;
        return tmp;
}
bool number :: operator > (number ob){
    return (x + y) > (ob.x + ob.y);
}
bool number :: operator < (number ob){
    return (x + y) < (ob.x + ob.y);
}
bool number :: operator >= (number ob){
    return (x + y) >= (ob.x + ob.y);
}
bool number :: operator <= (number ob){
    return (x + y) <= (ob.x + ob.y);
}
bool number :: operator == (number ob){
    return (x + y) == (ob.x + ob.y);
}
void solve(int tc)
{
    number a(10, 20), b(40, 50);
    number c = a + b;
    a.p();c.p();

}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
