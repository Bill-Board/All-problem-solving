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
#pragma comment(linker, "/STACK:268435456");
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using pii= pair<int,int>;

const int N=1000005;
ll mod= 1e9+7;
typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ott;

const int maxn = 1000002;
int K, ans[maxn], a[maxn], sum, k[N];
struct Query{
    int index, L, R;
    bool operator < (const Query &other) const {
		int block_own = L/K;
		int block_other = other.L/K;
		if(block_own == block_other)
            return R < other.R;
		return block_own < block_other;
	}
}query[maxn];

/*bool cmp(Query &q1,Query &q2) {
    if(q1.L/K==q2.L/K) return q1.R<q2.R;
    return q1.L<q2.L;
}*/
ott s;

void add(int index){
    //sum+=a[index];
    s.erase(s.find(a[index]));
}

void remove(int index){
    //sum-=a[index];
    s.insert(a[index]);
}



void solve(int tc)
{
    int n; cin >> n;
    K = sqrt(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];
    for(int i = 1; i<=2*N; i++)
        s.insert(i);
    int q; cin >> q;
    for(int i=0;i<q;i++){
        cin >> query[i].L >> query[i].R >> k[i];
        //if(query[i].L > query[i].R)
            //swap(query[i].L , query[i].R);
        query[i].index = i;
    }
    sort(query, query+q);
    vector<int> ans(q);
    int L=0, R=-1;
    for(int i=0;i<q;i++){
        while(R<query[i].R) add(++R);
        while(L<query[i].L) remove(L++);
        while(R>query[i].R) remove(R--);
        while(L>query[i].L) add(--L);
        int kot, val = *s.rbegin(),  p = k[query[i].index];
        if(s.size() < p)
            kot = val + (p  - s.size());
        else
            kot = *s.find_by_order(p - 1);
        ans[query[i].index] = kot;
    }
    for(auto i: ans)
        cout << i << "\n";
}



signed main()
{
    int test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
