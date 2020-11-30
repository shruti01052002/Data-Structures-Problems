#include<bits/stdc++.h>
using namespace std;

void arrange(long long arr[], int n) {
    int i;
    vector<long long> v;
    for(i=0;i<n;i++)
    v.push_back(arr[arr[i]]);
    for(i=0;i<n;i++)
    arr[i] = v[i];
    
    v.clear();
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        long long A[n];

        for(int i=0;i<n;i++){
            cin>>A[i];
        }

        arrange(A, n);

        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  