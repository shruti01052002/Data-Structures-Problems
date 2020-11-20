#include<bits/stdc++.h>
using namespace std;

double termOfGP(int A,int B,int N)
{
    double r = (1.0)*B/A;
    double t = floor(A*(pow(r, N-1)));
    return t;
}

int main()
{
    int T; 
    cin>>T;

    for(int i=0;i<T;i++)
    {
        int A,B;
        cin>>A>>B;
        cin>>N; 
        cout<<floor(termOfGP(A,B,N))<<endl;
    }

    return 0;
}
