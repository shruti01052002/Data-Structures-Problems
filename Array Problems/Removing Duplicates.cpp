#include <bits/stdc++.h>
using namespace std;

#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i = 0, j=1;
        vector <int>p;
        p.push_back(a[i]);
        while(1)
        {
            if(i==n || j==n)
            break;
            if(a[i]==a[j])
            {
                j++;
                continue;
            }
            else
            {
                p.push_back(a[j]);
                i = j;
                j++;
            }
        }
        for(i=0;i<p.size();i++)
        a[i] = p[i];
        
        return p.size();
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  