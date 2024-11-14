//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
/*
You are given an unsorted array with both positive and negative elements. You have to find the smallest positive number missing from the array in O(n) time using constant extra space.

**Input:** First line consists of T test cases. First line of every test case consists of N, denoting the number of elements in array. Second line of every test case consists of elements in array.

**Output:** Single line output, print the smallest positive number missing.

**Constraints:**

1<=T<=100 and 1<=N<=100

**Example:**
```
Input:
2
5
1 2 3 4 5
5
0 -10 1 3 -20
Output:
6
2
```
*/


#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;


void solve(int tc)
{
    int n, ind = 0; cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(0 < a[i]){
            a[ind++] = a[i];
        }
    }
    n = ind;
    for(int  i = 0; i<n; i++){
        int ind = abs(a[i]) - 1;
        if(ind < n)
            a[ind] = abs(a[ind])*-1;
    }
    for(int i = 0; i<n; i++){
        if(0 < a[i]){
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << n+1 << '\n';
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
