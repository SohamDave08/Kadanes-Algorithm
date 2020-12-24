#include <bits/stdc++.h>
using namespace std;

int KadaneAlgo(int A[], int n)
{
    int maxCurrent = A[0];
    int maxGlobal = INT_MIN;

    for(int i=1;i<n;i++)
    {
        maxCurrent = max(maxCurrent+A[i], A[i]);
        maxGlobal = max(maxGlobal, maxCurrent);
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