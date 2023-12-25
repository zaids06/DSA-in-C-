#include<bits/stdc++.h>
using namespace std;
void reverseArray(int *arr,int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5,6};
    for (int i:arr)
        cout<<i<<endl;
    int n=sizeof(arr)/sizeof(int);
    reverseArray(arr,n);
    cout<<endl;
    for (int i:arr)
        cout<<i<<endl;
    return 0;
}
