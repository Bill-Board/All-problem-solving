#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    freopen("data.out","w",stdout);
    int cases = 0;
    int n, m, A[10];
    int i, j, k;
    while(scanf("%d", &n) == 1 && n) {
        for(i = 0; i < n; i++)
            scanf("%d", &A[i]);
        scanf("%d", &m);
        vector<pair<int, int> > time;
        for(i = 0; i < m; i++) {
            int l, ap;
            scanf("%d %d", &l, &ap);
            time.push_back(make_pair(ap, l));
        }
        sort(A, A+n);
        sort(time.begin(), time.end());
        int order[10], impt[10];
        for(i = 0; i < 10; i++)
            impt[i] = 0xfffffff;
        do {
            int B[10] = {};
            for(i = 0; i < n; i++)
                B[i+1] = B[i]+A[i];
            B[n+1] = 0xfffffff;
            int x = 0, y = 0;
            int tmp[10] = {};
            while(x < m) {
                while(y <= n && B[y] < time[x].first)
                    y++;
                int tt = abs(B[y]-time[x].first);
                if(y-1 != 0)
                    tt = min(tt, abs(B[y-1]-time[x].first));
                tmp[time[x].second] += tt;
                x++;
            }
            int flag = 0;
            for(i = 0; i < 10; i++) {
                if(impt[i] < tmp[i]) {
                    flag = 1;
                    break;
                } else if(impt[i] > tmp[i]) {
                    flag = 2;
                    break;
                }
            }
            if(flag == 2) {
                for(i = 0; i < 10; i++) {
                    order[i] = A[i];
                    impt[i] = tmp[i];
                }
            }
        } while(next_permutation(A, A+n));
        printf("Data set %d\n", ++cases);
        printf("Order:");
        for(i = 0; i < n; i++)
            printf(" %d", order[i]);
        puts("");
        int err = 0;
        for(i = 0; i < 10; i++)
            err += impt[i];
        printf("Error: %d\n", err);
    }
    return 0;
}

