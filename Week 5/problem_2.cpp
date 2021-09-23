#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &v, int key, vector<int> &ans)
{
  vector<int> s;
  for(int i=0; i<v.size(); i++)
  {
      int cmp=key-v[i];
      if(count(s.begin(),s.end(),cmp))
      {
          ans.push_back(v[i]);
          ans.push_back(cmp);
          return;
      }
      else
       s.push_back(v[i]);
  }
}
int main()
{
    int test_case;
    cin>> test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int key;
        vector<int> v(n,0);
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }cin>>key;
        solve(v,key,ans);
        if(!ans.empty())
        {
            for(int i=0; i< ans.size(); i++)
            {
                cout<<ans[i]<<",";
            }
        }
        else cout<< "No such pair exist";
        cout<<endl;


    }
}
