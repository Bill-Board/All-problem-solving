#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
    int n, m, x, k; cin >> n >> m >> x >> k;
    char a[n+6][m+6];
    for(int i = 0; i<=n+3; i++)
        for(int j = 0; j<=m+3; j++)
            a[i][j] = '#';
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++)
            cin >> a[i][j];
    while(x--){
        char d;
        int u, v; cin >> u >> v >> d;
        for(int i = 0; i<k; i++){
            int indx = u, indy = v;
            if(d == 'L') indy--;
            if(d == 'R') indy++;
            if(d == 'U') indx--;
            if(d == 'D') indx++;
            if(a[indx][indy] == '#'){
                if(d == 'L') d='R';
                else if(d == 'R') d='L';
                else if(d == 'U') d='D';
                else if(d == 'D') d='U';
            }
            else
                u = indx, v = indy;
        }
        cout << u << ' ' << v << ' ' << d << '\n';
    }

    return 0;
}



///  Alhamdulillah...
