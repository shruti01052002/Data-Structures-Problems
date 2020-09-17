/** Reverse an array**/
#include<iostream>
using namespace std;
void Reverse(int arr[],int n);
int main()
{
    int t, n, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        Reverse(arr, n);
        cout<<endl;
    }
    return 0;
}
void Reverse(int arr[],int n)
{
    int i, temp;
    for(i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
