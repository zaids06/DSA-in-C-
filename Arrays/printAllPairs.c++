#include <bits/stdc++.h>
using namespace std;
void printAllPairs(int *arr,int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    printAllPairs(arr,n);
    return 0;
}