#include<bits/stdc++.h>

using namespace std;

int trappingWater(int arr[], int n){
    int i, s=0;
    int left[n], right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(i=1;i<n;i++)
    left[i] = max(left[i-1], arr[i]);
    
    for(i=n-2;i>=0;i--)
    right[i] = max(right[i+1], arr[i]);
    
    for(i=0;i<n;i++)
    s = s+(min(left[i], right[i])-arr[i]);
    
    return s;
}


int main(){ 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i =0;i<n;i++){
            cin >> a[i];            
        }

        cout << trappingWater(a, n) << endl;
        
    }
    return 0;
}  