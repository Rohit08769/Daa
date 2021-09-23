#include<bits/stdc++.h>
using namespace std;
bool bipartite(int src, vector<int> adj[], vector<int> &color)
{
    queue<int>q;
    q.push(src);
    color[src]=1;
    while(!q.empty())
    {

        int node=q.front();
        q.pop();
        vector<int>::iterator it;
        for( it=adj[node].begin(); it!=adj[node].end(); it++)
        {
            if(color[*it]==-1)
            {
                color[*it]=1-color[node];
                q.push(*it);
            }
            else if(color[*it]==color[node])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    vector<int> color(n+1,-1);
    if(bipartite(1,adj,color)) cout<<"Yes it is a bipartite graph";
    else  cout<<"Not a bipartite graph";

}
