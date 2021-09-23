#include<bits/stdc++.h>
using namespace std;
int finder1(vector<int> v, int k)
{
    priority_queue<int> pq;
    for(int i=0; i<k; i++)
    {
        pq.push(-v[i]);
    }
    for(int i=k; i<v.size(); i++)
    {
        if(v[i]>-pq.top())
        {
            pq.pop();
            pq.push(-v[i]);
        }
    }
    return -pq.top();
}
int finder2(vector<int> v, int k)
{
    priority_queue<int> pq;
    for(int i=0; i<k; i++)
    {
        pq.push(v[i]);
    }
    for(int i=k; i<v.size(); i++)
    {
        if(v[i]<pq.top())
        {
            pq.pop();
            pq.push(v[i]);
        }
    }
    return pq.top();
}
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int k;
        vector<int> v(n,0);
        for(int i=0; i<n ;i++)
        {
          cin>>v[i];
        }
        cin>>k;
        cout<<k<<" th largest element:"<<finder1(v,k)<<endl;
        cout<<k<<" th largest element:"<<finder2(v,k)<<endl;
    }
}
