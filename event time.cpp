#include<iostream>
using namespace std;
int main()
{
    int din, hin, mtin, sein, dout, hout, mtout, seout;
    int t1, t2, ans, diday, dih, dim, dis;
    char a, b, c, d, s1[10], s2[10];
    cin>>s1>>din>>hin>>a>>mtin>>b>>sein>>s2>>dout>>hout>>c>>mtout>>d>>seout;
    t1=din*86400+hin*3600+mtin*60+sein;
    t2=dout*86400+hout*3600+mtout*60+seout;
    ans=(t2-t1);
    diday=ans/86400;
    dih=(ans-(diday*86400))/3600;
    dim=(ans-(diday*86400)-(dih*3600))/60;
    dis=ans%60;
    cout<<diday<<" dia(s)"<<endl<<dih<<" hora(s)"<<endl<<dim<<" minuto(s)"<<endl<<dis<<" segundo(s)"<<endl;
return 0;
}
