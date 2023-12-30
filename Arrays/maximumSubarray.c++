#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int gloabalMax=INT_MIN;
    for (int i=1;i<A.size();i++)
    {
        A[i]+=A[i-1];
    }
    for (int i=0;i<A.size();i++)
    {
        int localMax=INT_MIN;
        for (int j=i;j<A.size();j++)
        {
            if (i==0)
            localMax=A[j];
            else
            localMax=(A[j]-A[i-1]);
            if (localMax>gloabalMax)
            gloabalMax=localMax;
            cout<<"IN func"<<localMax<<endl;
        }
        
    }
    return gloabalMax;
}
int main()
{
    vector<int>v={-1,-2,-3,-4};
    cout << "The maximum sum of a subarray is : " << maxSumSubarray(v);
}