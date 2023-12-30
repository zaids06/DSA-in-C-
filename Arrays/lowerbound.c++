#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int low=INT_MIN;
    for (int i:A){
        if (i>low&&i<=Val)
        low=i;
    }
    if (low==INT_MIN)
    return -1;
    return low;
} 
int main()
{
    vector <int> v={1,2,34,5,6,4};
    cout << "The Lower Bound of the given value is :"<<lowerBound(v,7);
}