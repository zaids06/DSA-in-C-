#include <bits/stdc++.h>
using namespace std;
void fun1(int *arr)
{
    cout<<sizeof(arr);
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    fun1(arr);
    return 0;
}