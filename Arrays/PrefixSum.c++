#include <bits/stdc++.h>
using namespace std;
void printSubArray(int *arr,int n)
{
    for (int i=1;i<n;i++)
    {
        arr[i]+=arr[i-1];
    }
    int globalSum=INT_MIN;
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            int localSum=0;
            for (int k=i;k<=j;k++)
            {
                localSum += arr[k];
                cout<<localSum<<" ";
            }
            cout<<endl;
            if (localSum>globalSum)
            globalSum=localSum;
        }
    }
    cout<<globalSum<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    printSubArray(arr,n);
    return 0;
}