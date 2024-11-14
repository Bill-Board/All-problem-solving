#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int get_answer(int a[], int n, int k){
    int cnt  = 0, frq[100002] = {};
    for(int i = 0; i<n; i++){
        if(k <= a[i]) continue;
        cnt += frq[k - a[i]];
        frq[a[i]]++;
    }
    return cnt;
}

int main()
{
    int n, k; cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
    for(int i = 0; i<n; i++)
        cin >> b[i];
    int mahmud = get_answer(a, n, k), basar = get_answer(b, n, k);
    if(mahmud > basar)
        cout << "Mahmoud\n";
    else if(mahmud < basar)
        cout << "Bashar\n";
    else
        cout << "Draw\n";
    return 0;
}



///  Alhamdulillah...
