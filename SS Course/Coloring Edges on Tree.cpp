//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

vector< int > tom[N];
ll visi [N];
map < pair < int , int >, int > mpp;

void connect(int i, int j, int val)
{
    if(i > j)
        swap( i, j);
    mpp[{i, j}]= val;
}

void solve()
{
    int n;
    cin >> n;
    vector < pair < int , int > > a;
    for( int i = 0; i < n-1 ; i++)
    {
        int u, v;
        cin >> u >> v;
        if(u > v)
            swap(u , v);
        tom[u].push_back(v);
        tom[v].push_back(u);
        a.push_back({u, v});
    }
    queue < pair <int , int >  > q;
    q.push({1, 0});
    int cr_h = 0;
    while(q.size())
    {
        int ind = q.front().first , val = q.front().second;
        q.pop();
        visi[ ind ] = 1;
        //cout << "ind " << ind << " "<< val << endl;
        int c_val = 1;
        cr_h = max( cr_h, (int)tom[ind].size() );
        for(auto i: tom[ ind ])
        {
            if( visi[i] == 1)continue;
            if( c_val == val)c_val++;
            connect(i, ind, c_val);
            q.push({i, c_val});
            c_val++;

        }//cout << endl;
    }
    cout << cr_h << endl;
    for(auto i: a)
        cout << mpp[i] << endl;
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
