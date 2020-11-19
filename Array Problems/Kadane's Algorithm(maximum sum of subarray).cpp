/** Kadane's Algorithm Maximum Sum of sub array**/
#include<iostream>
using namespace std;
int MaximumSubArray(int arr[], int n);
int main()
{
    int t, n, i, cs, ms, result;
    cin>>t;     //Taking input the no. of test cases the user want to run the program
    while(t--)
    {
        cin>>n; //Taking input the size of array from the user
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];       //Taking input the elements of array
        result = MaximumSubArray(arr, n);
        cout<<"Maximum sum of Sub Array: "<<endl;
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
Maximum sum of Sub Array:
7
6
-1 -2 3 -4 5 6
Maximum sum of Sub Array:
11

Process returned 0 (0x0)   execution time : 50.620 s
Press any key to continue.
**/
