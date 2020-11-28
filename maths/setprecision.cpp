#include <bits/stdc++.h>
using namespace std;

void precise(float a, float b)
{
    cout<<a/b<<" ";
    cout<<fixed<<setprecision(3)<<a/b;
    
    cout<<endl;
}

void precise(float , float );

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b; 
	    precise(a,b);
	    
	}
	return 0;
}