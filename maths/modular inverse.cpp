#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(a==0)
    return b;
    return GCD(b%a, a);
}

int modInverse(int a, int m)
{
    if(GCD(a, m)==1 && m!=1)
    {
       int res = a%m;
       for(int i=1;i<m;i++)
       {
           if(res*i%m==1)
           return i;
       }
    }
    if(m==1)
    return -1;
    else 
    return -1;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
} 


/**
int res=1;
    int k=m-2;
    while(k)
    {
        if(k%2)
        res = (res*a)%m;
        
        k = k/2;
        a = (a*a)%m;
    }
    return res;
**/