#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int n,int &k)
{
    int* lb=lower_bound(arr,arr+n,k);

    if (lb==arr+n || *lb!=k)
        return -1;

    int *ub=upper_bound(lb,arr+n,k);

       return ub-lb;

}
int main()
{
    int n,i,count=0;
    int j=0;
    cin>>n;
    int ar1[100];
    int ar2[100];
    for (i=0;i<n;i++)
    {
        int test_case,key;
        cin >> test_case;
        for(int k=0;k<test_case;k++)
        {
            cin>>ar1[k];
        }
        cin>>key;
        ar2[j++]=key;
        ar2[j++]= binary(ar1,test_case,key);
    }
    for (i=0;i<2*n;i=i+2)
    {
        if(ar2[i+1]!=-1)
        {
          cout<<ar2[i]<<"-"<<ar2[i+1]<<endl;
        }
        else
        {
            cout<<ar2[i]<<"Not Present ";
        }
    }
    return 0;
}
