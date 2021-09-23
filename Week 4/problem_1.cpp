#include<bits/stdc++.h>
using namespace std;
void merger(vector<int>&v, int low,int mid, int high)
{
    vector<int>temp;
    int left=low, right=mid+1;
    while(left<=mid && right<=high)
    {
        if(v[left]<=v[right])
        {
            temp.push_back(v[left++]);
        }
        else
        {
            temp.push_back(v[right++]);
        }
    }
    while(left<=mid)
    {
        temp.push_back(v[left++]);
    }
    while(right<=high)
    {
        temp.push_back(v[right++]);
    }
    for(int i=low; i<=high; ++i)
    {
        v[i]=temp[i-low];
    }

}
void merge_sort(vector<int>&v,int low, int high)
{
    if(low>=high) return;
    int mid=(low+high)/2;
    merge_sort(v,low,mid);
    merge_sort(v,mid+1,high);
    merger(v,low,mid,high);
}
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
           v.push_back(x);
        }
        merge_sort(v,0,v.size()-1);

        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
