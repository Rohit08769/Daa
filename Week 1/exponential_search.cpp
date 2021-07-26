#include<iostream>
using namespace std;
int expo(int arr[],int n,int k,int &count)
{
    // exponential search
    count=1;
    if (arr[0]==k)
    {
        return 0;
    }
    int i=1;
    while(i<n && k>=arr[i])
    {
        count++;
        i*=2;
    }
    // binary search
    int low=i/2,high=min(i,n-1);
    while(low<=high)
    {
        count++;
        int mid=(low+high)/2;
        if (arr[mid]<k)
        {
            low=mid+1;
        }
        else if (arr[mid]>k)
        {
            high=mid-1;
        }
        else
        {
            return mid;
        }

    }
    return -1;
}
int main()
{
    int n,i,count;
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
        ar2[j++]= expo(ar1,test_case,key,count);
        ar2[j++]=count;
    }
    for (i=0;i<2*n;i=i+2)
    {
        if(ar2[i]!=-1)
        {
          cout<<"Present "<<ar2[i+1]<<endl;
        }
        else
        {
            cout<<"Not Present "<<ar2[i+1]<<endl;
        }
    }
    return 0;
}
