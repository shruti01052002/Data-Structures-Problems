#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int i;
    if(n<=1)
    return false;
    if(n<=3)
    return true;
    
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
    return false;
    
    return true;
    
    
}

int main()
{
    int T; 
    cin>>T; 
    while(T--) 
    {
        int N;
        cin>>N;
        
        if(isPrime(N)) 
        cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}
