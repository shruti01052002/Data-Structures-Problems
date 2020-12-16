#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> vec, int K) {
    int index;
    auto it = find(vec.begin(), vec.end(), K);
 
    if (it != vec.end()) 
    {
        index = it - vec.begin();
        return index;
    }
    else 
    {
        return -1;
    }
}