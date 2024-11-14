//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll mod= 1e9+7;
bool yesd(string s){
    int cnt = 0;
    if(s.size() != 3)return false;
    for(int i = 0; i<3; i++)
        cnt+= ('A'<=s[i] and s[i]<='Z');
    return cnt == 3;
}


void solve(int tc)
{
    string s;
    cin.ignore(); getline(cin, s);
    set<string> ff;
    int n = s.size();
    for(int i = 0; i<n; i++){
        string p ="";
        while(i<n and s[i] != ' ')p+=s[i], i++;

        while(p.size() and (p.back()=='.' or p.back()==','))
            p.pop_back();
        reverse(p.begin(),p.end());

        while(p.size() and (p.back()=='.' or p.back()==','))
            p.pop_back();

        reverse(p.begin(),p.end());
        //cout << p << '\n';

        if( yesd(p) )
            ff.insert(p);
    }
    int cse = 0, eee = 0, swe = 0, oth = 0;
    for(auto i: ff){
        if(i == "CSE")cse=1;
        else if(i == "EEE")eee=1;
        else if(i == "SWE")swe=1;
        else oth++;
    }
    cout <<"Case "<< tc <<": ";
    if(cse==1 && eee==0 && swe==0 && oth == 0)
        cout << "SUST CSE Carnival\n";
    else if(cse==1 && eee==1 && swe==1)
        cout << "SUST Tech Fest\n";
    else
        cout << "Festival of SUST\n";
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
