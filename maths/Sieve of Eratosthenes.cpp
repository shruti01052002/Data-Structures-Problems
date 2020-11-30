#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        bool primes[N+1];
        memset(primes, true, sizeof(primes));
        vector<int> arr;
        
        for(int i = 2; i*i <= N; i++)
        if(primes[i] == true)
        {
            for(int j = i*i; j <= N; j+=i)
            primes[j] = false;
        }
            
        for(int i = 2; i <= N; i++)
        if(primes[i])
        arr.emplace_back(i);
        
        return arr;
    }
        
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
} 