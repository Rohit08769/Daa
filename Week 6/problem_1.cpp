#include<bits/stdc++.h>
using namespace std;
void bfs(int n,int **adj,int src,int dest)
{
      int vis[n]={0};
    queue<int> q;
    if(vis[src]==0)
    {
        q.push(src);
        vis[src]=1;
    }
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(int i=0; i<n; i++)
        {
            if(adj[node][i]==1)
            {
               if(i==dest)
               {
                   cout<<"Yes Path Exist";
                   return ;
               }
               if(vis[i]==0)
               {
                   q.push(i);
                   vis[i]=1;
               }
            }
        }
    }
    cout<<"No Path Exist";
}
int main()
{
    int n;
    cin>>n;
    int **adj=new int*[n];
    for(int i=0; i<n; i++)
    {
        adj[i]=new int[n];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>adj[i][j];
        }
    }
    int src,dest;
    cin>>src>>dest;

    bfs(n,adj,src-1,dest-1);

}
