/** Kadane's Algorithm Maximum Sum of sub array**/
#include<iostream>
using namespace std;
int MaximumSubArray(int arr[], int n);
int main()
{
    int t, n, i, cs, ms, result;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        result = MaximumSubArray(arr, n);
        cout<<result<<endl;
    }
    return 0;
}
int MaximumSubArray(int arr[], int n)
{
    int i, cs=0, ms=0;
    for(i=0;i<n;i++)
    {
        cs = cs+arr[i];
        if(cs<0)
        cs = 0;
        if(ms<cs)
        ms = cs;
    }
    return ms;
}
/**
Output
2
8
-2 -5 6 -2 -3 1 5 -6
7
6
-1 -2 3 -4 5 6
11

Process returned 0 (0x0)   execution time : 44.878 s
Press any key to continue.
**/
