#include <bits/stdc++.h>
using namespace std;
int linearSearch(int *arr,int n,int x)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return -1;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int x;
    cin>>x;
    cout<<linearSearch(arr,n,x);
    return 0;
}