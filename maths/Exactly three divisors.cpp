#include <bits/stdc++.h>
#include<cmath>
using namespace std;

void isPrime(int p[], int n)
{
    int i, j;
    for(i=3;i<=n;i+=2)
    p[i] = 1;
    
    for(int i=3;i<=n;i++)
    {
        if(p[i]==1)
        {
            for(j=i*i;j<=n;j=j+i)
            p[j] = 0;
        }
    }
    
    p[2] = 1;
    p[0] = 0;
    p[1] = 0;
}

int exactly3Divisors(int n)
{
    int k, c=0, sq;
    sq = sqrt(n);
    int p[sq]={0};
    isPrime(p, sq);
    for(k=1;k<=sq;k++)
    {
        if(p[k]==1)
        c++;
    }
    return c;
}

int main()
 {
    int T;

    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  