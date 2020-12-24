#include <bits/stdc++.h>
using namespace std;

int KadaneAlgo(int A[], int n)
{
    int currSum=0;
    int maxGlobal = INT_MIN;

    for(int i=0;i<n;i++)
    {
        currSum += A[i];
        maxGlobal = max(maxGlobal, currSum);

        if(currSum<0)
            currSum=0;
    }

    return maxGlobal;
}

int main()
{
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<KadaneAlgo(arr,n);

    return 0;
}