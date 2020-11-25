#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N)
{
    int i;
    double s = 0;
    if(N<0)
    return 0;
    if(N<=1)
    return 1;
    
    for(i=2;i<=N;i++)
    {
        s = s+log10(i);   
    }
    return floor(s)+1;
}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
