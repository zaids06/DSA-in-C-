#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &v)
{
    bool isNegative = true;
    int localMax = INT_MIN;
    for (int i : v)
    {
        if (i > 0)
        isNegative = !isNegative;
        localMax=max(localMax,i);
    }
    if (isNegative)
        return localMax;
    //kadane's Algo
    int gloabalMax=INT_MIN;
    localMax=0;
    for (int i: v)
    {
        localMax+=i;
        if(localMax<0)
        localMax=0;
        gloabalMax=max(localMax,gloabalMax);
    }
    return gloabalMax;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {1,2,3,4,5,6,7};
    cout << "The maximum subarray is: "<<maxSubArray(v);
    return 0;
}