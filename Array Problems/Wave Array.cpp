#include<bits/stdc++.h>
using namespace std;

void convertToWave(int *arr, int n){
    int i;
    for(i=0;i<n-1;i+=2)
    {
        swap(arr[i], arr[i+1]);
    }

}

int main()
{
    int t,n;
    cin>>t; 
    while(t--)
    {
        cin>>n; 
        int a[n]; 
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; 
            
        cout<<endl;
    }
}