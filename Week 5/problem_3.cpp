#include <iostream>
#include<vector>
using namespace std;
void solve(vector<int> &v, vector<int> &s)
{
    int i=0, j=0;
    vector<int> ans;
    while(i<v.size() && j<s.size())
    {
        if(v[i]==s[j]) ans.push_back(v[i]);
        if(v[i]<=s[j]) i++;
        else j++;
    }
    for(int i=0; i<ans.size(); i++)
    {
      cout<<ans[i]<<" ";
    }
}
int main()
{
    int n,m;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cin>>m;
    vector<int> s(m);
    for(int i=0; i<m; i++)
    {
        cin>>s[i];
    }
    solve(v,s);
    cout<<endl;
}
