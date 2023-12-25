#include <bits/stdc++.h>
using namespace std;
int maxSubArray(int *arr, int n)
{
    int maxsum = 0;
    int localSum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((localSum + arr[i]) < 0)
            localSum = 0;
        else
        {
            localSum += arr[i];
            maxsum = max(maxsum, localSum);
        }
    }
    return maxsum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {-1, 2, 3, -4, 2, -10, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << maxSubArray(arr, n);
    return 0;
}