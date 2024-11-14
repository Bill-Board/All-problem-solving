//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
int a[N];
string s , u(N, '1');
pair<string , bool > ek_del(vector < int > a, int k)
{
    if(a.size()<k)
        return make_pair("", false);
    string ans;
    if(k==1)
    {
        for(int i = s.size() -1; ~i ; i--)
        {
            if( i != a.back())
                ans+=s[i];
        }
    }
    else
    {
        for(int i = s.size() - 1; ~i ; i--)
        {
            if(k and i == a.back())
            {
                k--;
                a.pop_back();
                continue;
            }
            ans+=s[i];
        }
    }
    //cout << ans << endl;

    while(ans.size()>1 and ans.back()=='0')
        ans.pop_back();
    //cout << ans << endl;
    reverse( ans.begin(), ans.end() );
    if(ans.empty())return make_pair(ans, false);
    if(ans.size() > 1) return make_pair(ans, true);
    if(( ans[0]- '0' )% 3 != 0 )
        return make_pair(ans, false);
    //cout << ans << endl;
    return make_pair(ans, true);
}

void solve()
{
    cin >> s;
    if(s.size()==1)
    {
        if( (s[0]-'0')%3 ==0)
            cout << s << endl;
        else
            cout << -1 << endl;
        return;
    }
    int sum = 0;
    vector < int > one, dui;
    for(int i= 0 ; i < s.size(); i++)
    {
        a[i] = (s[i]-'0')% 3;
        sum = (sum + a[i]);
        if(a[i]==1)
            one.push_back(i);
        if(a[i] == 2 )
            dui.push_back(i);
    }
    if(sum%3 == 0)
    {
        cout << s << endl;
        return;
    }
    //cout << s << " " << sum << endl;
    string ans;
    if(sum % 3 == 1)
    {
        //cout << "trdf" << endl;
        if(one.empty() and dui.size()<2)
        {
            cout << -1 << endl;
            return;
        }
        pair < string , bool > e=ek_del(one, 1), ee=ek_del(dui, 2);
        string p = e.first, q = ee.first;
        //cout << p << " w " << q << endl;
        if( e.second== false and ee.second==false)
            cout << -1 << endl;
        else if(e.second==false)
        {
            cout << q << endl;
        }
        else if(ee.second == false)
        {
           cout << p << endl;
        }
        else if(p.size() > q.size())
        {
            cout << p << endl;
        }
        else
        {
            cout << q << endl;
        }
        return;
    }
    else
    {
        if(one.size()<2 and dui.empty())
        {
            cout << -1 << endl;
            return;
        }
        pair < string , bool > e=ek_del(one, 2), ee=ek_del(dui, 1);
        string p = e.first, q = ee.first;
        //cout << p << " w " << q << endl;
        if( e.second== false and ee.second==false)
            cout << -1 << endl;
        else if(e.second==false)
        {
            cout << q << endl;
        }
        else if(ee.second == false)
        {
           cout << p << endl;
        }
        else if(p.size() > q.size())
        {
            cout << p << endl;
        }
        else
        {
            cout << q << endl;
        }
        return ;
    }
    //cout << -1 << endl;
}



signed main()
{

    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
