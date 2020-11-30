#include <bits/stdc++.h>
using namespace std;

// arr[]: input array
// n: size of array
// k: find element smaller and closest to it. 
int immediateSmaller(int arr[], int n, int x)
{
    int i, v=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]>v && arr[i]<x)
        {
            v = arr[i];
        }
    }
    return v;
    // your code here
    
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
            int n;
        	cin >> n;
        	int arr[n];
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	int x;
        	cin >> x;
        	cout << immediateSmaller(arr, n, x) << endl;
	}
	return 0;
}