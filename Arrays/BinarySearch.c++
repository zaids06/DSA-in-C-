#include <bits/stdc++.h>
using namespace std;
int recursiveBS(int *arr,int l,int r,int x)
{
    if (r<l)
        return-1;
    int mid=(l+r)/2;
    if (arr[mid]==x)
        return mid;
    if(arr[mid]>x)
        recursiveBS(arr,l,mid-1,x);
    else
        recursiveBS(arr,mid+1, r,x);
}
int iterativeBS(int *arr,int n,int x)
{
    int low=0,high=n-1;

    while(high>=low)
    {
        int mid=(low+high)/2;
        if (arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,3,4,5,6};
    int n=5,x;
    cin>>x;
//    cout<<recursiveBS(arr,0,n-1,x);
    cout<<iterativeBS(arr,n,x);
    return 0;
}