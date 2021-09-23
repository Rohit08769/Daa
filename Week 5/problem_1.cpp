#include<bits/stdc++.h>
using namespace std;
void solve(vector<char> &v)
{
  int arr[26];
  int maxi=1;
  char val;
  memset(arr,0,sizeof(arr));
  for(int i=0; i<v.size(); i++)
  {
     arr[v[i]-'a']++;
  }
  for(int i=0; i<26; i++)
  {
     if(arr[i]>maxi)
     {
         maxi=arr[i];
         val=char(i+'a');
     }
  }
  if(maxi==1) cout<<"No duplicate present";
  else cout<<val<<"-"<<maxi;

}
int main()
{
    int test_case;
    cin>> test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        vector<char> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        solve(v);
        cout<<endl;
    }
}
