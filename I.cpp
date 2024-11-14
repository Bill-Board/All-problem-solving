//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=85;
int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};
int n, visi[N][N];
char a[N][N];
void dfs(int indx, int indy){
    if(visi[indx][indy])return;
    //cout << indx << " " << indy << endl;
    visi[indx][indy] = 1;
    for(int i = 0; i<4; i++){
        int x = fx[i] + indx, y = indy + fy[i];
        if(0<x and x<=n and 0<y and y<=n and a[x][y]!='*')
            dfs(x,y);
    }
}

int bfs(int indx, int indy, int gox, int goy)
{
    queue<pair <int, int > >q;
    vector<vector<int> >v(n+2, vector<int> (n+2, 0) );
    q.push({indx, indy});
    v[indx][indy] = 1;
    while(q.size()){
        int xx = q.front().first, yy = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int x = xx+fx[i], y = yy+ fy[i];
            if(0<x and x<=n and 0<y and y<=n and v[x][y]==0 and a[x][y]!='*'){
                v[x][y]=v[xx][yy] + 1;
                q.push({x,y});
            }
        }
    }
    return v[gox][goy] - 1;
}

bool ki(int i, int j){
    if((visi[i-1][j]==0 and visi[i][j-1]==0) or (visi[i-1][j]==0 and visi[i][j+1]==0) or (visi[i+1][j]==0 and visi[i][j+1]==0) or (visi[i+1][j]==0 and visi[i][j-1]==0) )
        return true;
    else return false;
}

void solve()
{
    cin >> n;
    vector<pair <int, int > >vp;
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=n;j++){
            cin >> a[i][j];
            if(a[i][j] == 'a' or a[i][j]=='b')
            vp.push_back({i,j});
        }
    }
    dfs(vp[0].first,vp[0].second);
    if(visi[ vp[1].first ][ vp[1].second ]==0){
        cout << "no solution" << endl;
        return;
    }
    int cr_h =INT_MAX, k = 1 ;
    for(int i = 1 ; i<=n ; i++){
        if(vp[0].first < i and i < vp[1].first )
            continue;
        for(int j = 1; j<=n; j++){
            if(visi[i][j] and k and ki(i,j)){
                int kot = bfs(vp[0].first,vp[0].second, i, j);
                int kot2 = bfs(vp[1].first,vp[1].second, i, j);
                cr_h = min(cr_h, max(kot, kot2));
                //cout << i << " " << j << " || " << kot << "  " << kot2 << endl;
            }
        }
    }

    cout << cr_h << endl;
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
