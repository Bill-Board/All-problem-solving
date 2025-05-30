#include <bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f



int main()
{
    int testCases, numberOfCities, numberOfRoads,
        sourceCity, destinationCity, roadCost, homeTown, maxCostFound;
    int tc=1, test_case=1;
    //cin >> tc;

    while(tc--)
    {
        int n, m , t;
        cin >> n >> m;

        vector< pair< int , int>  > adj[n+2];
        map< int ,int > mpp;

        for(int i=0;i<m;i++)
        {
             int x, y, val;
             cin >> x>> y>> val;
             adj[x].push_back({y,val});
             adj[y].push_back({x,val});
        }

        cin >> t;

        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;

        vector<int> dist(n+2, INF);
        for( auto i: dist) cout<< i << " " ;cout<<endl;
        pq.push(make_pair(0, t));
        dist[t] = 0;

        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();

            for (auto x : adj[u])
            {
                int v = x.first;
                int weight = x.second;

                if (dist[v] > dist[u] + weight)
                {
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
                }
            }
        }

        cout << "Case " << test_case ++ << ":\n";
        for (int i = 0; i < n; i++)
            if (dist [i] == INF)
                cout << "Impossible\n";
            else
                cout << dist[i] << "\n";
    }

    return 0;
}
