#include<bits/stdc++.h>
using namespace std;

#include <iostream>

void reverseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArr(int arr[], int d, int n){
    
    if (d == 0)
        return;
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);

}

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, d;

	    cin >> n >> d;
	    
	    int arr[n];

	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }

	    rotateArr(arr, d,n);

	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  