#include<iostream>
#include<math.h>
using namespace std;
// linear_search
int linear(int arr[],int n,int k,int &count)
{
    count=0;
    for(int i=0;i<n;i++)
    {
        count++ ;
        if(arr[i]==k)
            return i;
    }
    return -1;
}
int main()
{
    int n,i,count=0;
    int j=0;
    // input no of test case
    cin>>n;
    int ar1[100];
    int ar2[100];
    for (i=0;i<n;i++)
    {
        int test_case,key;
        // input element of each test case
        cin >> test_case;
        for(int k=0;k<test_case;k++)
        {
            cin>>ar1[k];
        }
        cin>>key;
        ar2[j++]= linear(ar1,test_case,key,count);
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
