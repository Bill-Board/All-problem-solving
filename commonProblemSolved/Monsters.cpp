//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pii pair<int,int>

const int N=1005;
int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};

int n, m, visi1[N][N];
string s[N];
vector < vector <pii> > v;
int dist[N][N];

char alabu(pii a, pii b){
    if(a.first < b.first )
        return 'U';
    if(a.first > b.first )
        return 'D';
    if(a.second < b.second )
        return 'L';
    if(a.second > b.second )
        return 'R';
}

string find_path(pii a, pii b)
{

    v.resize(n+3, vector<pii> (m+3, {0,0}));
    queue< pii > q;
    q.push(a);
    dist[a.first][a.second] = 1;
    v[a.first][a.second]=a;
    while(q.size()){
        pii k = q.front();q.pop();
        if(k == b)break;
        for(int i = 0; i<4; i++){
            int x = k.first+fx[i], y = k.second +fy[i];
            if(0<=x and x<n and 0<=y and y<m and s[x][y]!='#' and dist[x][y]==0){
                v[x][y] = k;
                dist[x][y] = dist[k.first][k.second] + 1;
                q.push({x,y});
            }
        }
    }
    int cr_h = dist[b.first][b.second] - 1;
    cout << "YES\n" << cr_h << endl;
    string ans;
    while(b != v[b.first][b.second]){
        ans += alabu(b, v[b.first][b.second]);
        b = v[b.first][b.second];
    }
    reverse(ans.begin(), ans.end());
    ans.resize(cr_h);
    return ans;
}

pii dfs(int indx, int indy){
    if(indx == 0 or indx == n-1 or indy == 0 or indy == m-1)
        return {indx, indy};
    visi1[indx][indy] = 1;
    pii a= {-1,-1};
    for(int i =0; i<4; i++){
        int x = indx + fx[i];
        int y = indy + fy[i];
        if(0<=x and 0<=y and x<n and y<m and s[x][y]=='.' and !visi1[x][y] and a.first == -1)
            a = dfs(x, y);
    }
    return a;
}


void solve()
{
    cin >> n >> m;
    pii a;
    for(int i = 0; i<n; i++){
        cin >> s[i];
        for(int j = 0; j<m; j++){
            if(s[i][j] == 'A')
                a.first=i,a.second=j;
            if(s[i][j]=='M')
                s[i][j] = '#';
        }
    }
    pii b = dfs(a.first,a.second);
    if(b.first == -1){
        cout << "NO\n";
        return;
    }
    cout << find_path(a, b) << endl;
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
