#include<iostream>
using namespace std;
int binary(int arr[],int low, int high,int k,int &count)
{
    count=0;
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
        ar2[j++]= binary(ar1,0,test_case-1,key,count);
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
