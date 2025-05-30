#include <bits/stdc++.h>
using namespace std;
int q=1;
int dp[101][100001];
// Returns the value of maximum profit
int knapSackRec(int W, int wt[], int val[],
                int i)
{
    // base condition
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
        return dp[i][W];

    if (wt[i] > W) {

        // Store the value of function call
        // stack in table before return
        dp[i][W] = knapSackRec(
W, wt, val, i - 1);
        return dp[i][W];
    }
    else {

        // Store value in a table before return
        dp[i][W] = max(
            val[i] + knapSackRec(
                         W - wt[i], wt, val, i - 1),
            knapSackRec(W, wt, val, i - 1));

        // Return value of table after storing
        return dp[i][W];
    }
}

int knapSack(int W, int wt[], int val[], int n)
{
    /** double pointer to declare the
// table dynamically
    int** dp;
    dp = new int*[n];

    // loop to create the table dynamically
    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];

    // loop to initially filled the
// table with -1 */
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;
    return knapSackRec(W, wt, val, n - 1);
}

void solve()
{
    int n,k;cin>>n>>k;
    int wt[n+3],val[n+2];
    for(int i=0;i<n;i++)cin>>wt[i]>>val[i];
    cout <<"Case "<<q++<<": "<<knapSack(k, wt, val, n)<<endl;
    return ;
}

int main()
{

    //freopen("data.out","w",stdout);
    //while(1)
    int tt;cin>>tt;
    while(tt--)
        solve();
    return 0;
}



      ///  Alhamdulillah...

