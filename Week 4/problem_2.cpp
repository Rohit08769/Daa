#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int> &v, int l, int h)
{
    int pivot=v[l];
    int i=l,j=h;
    while(i<j)
    {
        while(i<=j && v[i]<=pivot) i++;
        while(v[j]>pivot) j--;
        if(i<j)
        {
            swap(v[i],v[j]);
        }
    }
    swap(v[l],v[j]);
    return j;
}
void quick(vector<int> &v, int l, int h)
{
    if(l<h)
    {
        int part=helper(v,l,h);
        quick(v,l,part-1);
        quick(v,part+1,h);
    }
}
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        vector<int>v(n,0);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        quick(v,0,n-1);
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
