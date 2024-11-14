#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ott;

const int maxn = 1000012;
int K, ans[maxn], a[maxn], sum, k[maxn];

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

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;

    K = sqrt(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int q;
    cin >> q;

    for(int i=0;i<q;i++){
        cin >> query[i].L >> query[i].R >> k[i];
        if(query[i].L > query[i].R)
            swap(query[i].L , query[i].R);
        query[i].L--, query[i].R--;
        query[i].index = i;
    }
    sort(query, query+q);
    for(int i = 1; i<=maxn; i++)
        s.insert(i);
    int L=0, R=-1;
    for(int i=0;i<q;i++){
        while(R<query[i].R) add(++R);
        while(L<query[i].L) remove(L++);
        while(R>query[i].R) remove(R--);
        while(L>query[i].L) add(--L);
//        cout << query[i].L << " " << query[i].R << '\n';
//        cout << L << " " << R << '\n';
//        cout << "set ";
//        for(auto j: s)
//            cout << j << " " ; cout << '\n';

        int kot, val = *s.rbegin(),  p = k[query[i].index];
        if(s.size() < p)
            kot = val + (p  - s.size());
        else
            kot = *s.find_by_order(p - 1);
        ans[query[i].index] = kot;
    }
    for(int i=0;i<q;i++){
        cout << ans[i] << "\n";
    }
    return 0;
}
