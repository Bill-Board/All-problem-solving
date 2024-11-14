 //BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME


// Shoeb Akibul Islam
// Dept of ICE, NSTU


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define dua ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i_love_u_huu dua long long t;cin >> t;while(t--)
#define ses   "\n"
#define whp   " "
#define mxi 200003
#define mp make_pair
#define pii pair<long long, long long>
#define pf printf
#define sf scanf
#define ff first
#define sob(z)  (z).begin(), (z).end()
#define ss second
#define pb push_back
#define rep0(i,a,b) for(int i=a; i<b; i++)
#define rep1(i,a,b) for(int i=a; i<=b; i++)
#define rep0in(i,a,b) for(int i=a-1; i>=b; i--)
#define rep1in(i,a,b) for(int i=a; i>b; i--)
#define repv(i,a) for(auto i=a.begin(); i!=a.end();++i)
#define INF 0x3f3f3f3f
#define CLR(a,b) memset(a,b,sizeof(a));
#define PI acos(-1)
#define what_is(x) cerr<<x<<ses;
//set <int, greater <int> > ::iterator it;
//vector<pair<int,int> >a;
//memset(arr,0,sizeof(hg));
//priority_queue <int, vector<int>, greater<int> > pq;
///  string single character erase-
///             s.erase(s.begin()+x); where s is st ring name
///               ans x is index;
///    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
///    transform(su.begin(), su.end(), su.begin(), ::toupper);
typedef int v99;
typedef unsigned long long ull;
using namespace std;
using namespace __gnu_pbds;

v99 q=1;
void kortesitoh(char s[])
{
    //printf("Message #%d\n",q++);
    cout<<"Message #"<<q++<<ses;
    //s+=' ';
    v99 n=strlen(s)+1;s[n-1]=' ';
    deque<char>dq;
    for(v99 i=0;i<n;i++)
    {
        string ss="";char temp;
        while(s[i]!=' ')ss+=s[i],i++;
        //cout<<i<<ses;
        if (ss == ".-") temp = 'A';
        else if (ss == "-...") temp = 'B';
        else if (ss == "-.-.") temp = 'C';
        else if (ss == "-..") temp = 'D';
        else if (ss == ".") temp = 'E';
        else if (ss == "..-.") temp = 'F';
        else if (ss == "--.") temp = 'G';
        else if (ss == "....") temp = 'H';
        else if (ss == "..") temp = 'I';
        else if (ss == ".---") temp = 'J';
        else if (ss == "-.-") temp = 'K';
        else if (ss == ".-..") temp = 'L';
        else if (ss == "--") temp = 'M';
        else if (ss == "-.") temp = 'N';
        else if (ss == "---") temp = 'O';
        else if (ss == ".--.") temp = 'P';
        else if (ss == "--.-") temp = 'Q';
        else if (ss == ".-.") temp = 'R';
        else if (ss == "...") temp = 'S';
        else if (ss == "-") temp = 'T';
        else if (ss == "..-") temp = 'U';
        else if (ss == "...-") temp = 'V';
        else if (ss == ".--") temp = 'W';
        else if (ss == "-..-") temp = 'X';
        else if (ss == "-.--") temp = 'Y';
        else if (ss == "--..") temp = 'Z';
        else if (ss == "-----") temp = '0';
        else if (ss == ".----") temp = '1';
        else if (ss == "..---") temp = '2';
        else if (ss == "...--") temp = '3';
        else if (ss == "....-") temp = '4';
        else if (ss == ".....") temp = '5';
        else if (ss == "-....") temp = '6';
        else if (ss == "--...") temp = '7';
        else if (ss == "---..") temp = '8';
        else if (ss == "----.") temp = '9';
        else if (ss == ".-.-.-") temp = '.';
        else if (ss == "--..--") temp = ',';
        else if (ss == "..--..") temp = '?';
        else if (ss == ".----.") temp =  '\'';
        else if (ss == "-.-.--") temp = '!';
        else if (ss == "-..-.") temp = '/';
        else if (ss == "-.--.") temp = '(';
        else if (ss == "-.--.-") temp = ')';
        else if (ss == ".-...") temp = '&';
        else if (ss == "---...") temp = ':';
        else if (ss == "-.-.-.") temp = ';';
        else if (ss == "-...-") temp = '=';
        else if (ss == ".-.-.") temp = '+';
        else if (ss == "-....-") temp = '-';
        else if (ss == "..--.-") temp = '_';
        else if (ss == ".-..-.") temp = '\"';
        else if (ss == ".--.-.") temp = '@';
        else temp=' ';
        if(temp!=' ')dq.push_back(temp);
        else if(!dq.empty() && dq.back()!=' ')dq.push_back(temp);
    }
    //while(!dq.empty())printf("%c",dq.front()),dq.pop_front();
    while(!dq.empty())cout<<dq.front(),dq.pop_front();
    cout<<ses;//printf("\n");
}
void solve()
{
    /// code is here->
    v99 tt;
    //scanf("%d",&tt);
    cin>>tt;

    while(tt--)
    {
        char s[2003];
        cin.ignore();
        gets(s);
        kortesitoh(s);
        if(tt)cout<<ses;//printf("\n");
    }
}



signed main()
{
    //dua
    //freopen("data.out","w",stdout);
    //while(1)
    //i_love_u_huu
    solve();
    return 0;
}



      ///  Alhamdulillah...
