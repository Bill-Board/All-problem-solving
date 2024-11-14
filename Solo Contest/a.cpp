#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int A = a, B= b, C= c;

    if(a>b)
        swap(a,b);
    if(a>c)
        swap(a,c);
    if(b>c)
        swap(b,c);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

}



///  Alhamdulillah...
