#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
    vector<int> vect;
    int lead = 1;
    int temp = 0;
    for(int i=(n-1);i>=0;i--)
    {
        if(arr[i]>=temp)
        {
            temp = arr[i];
            vect.push_back(temp);
        }
    }
    reverse(vect.begin(), vect.end());
    return vect;
}


int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        vector<int> v = leaders(a, n);
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
