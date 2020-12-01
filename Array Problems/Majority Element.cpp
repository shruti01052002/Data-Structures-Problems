//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x,int y);

int majorityWins(int arr[], int n, int x,int y)
{
    int xc=0, yc=0, i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        xc++;
        if(arr[i]==y)
        yc++;
    }
    if(xc>yc)
    return x;
    else if(yc>xc)
    return y;
    else
    return min(x, y);
}

int main() {
    
    int t;
    cin>>t; 
    while(t--)
    {
        int n; 
        cin>>n;
        int arr[n]; 
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        int x,y; 
        cin>>x>>y; 
        cout << majorityWins(arr,n,x,y) << endl; 
        
    }
    
	return 0;
}