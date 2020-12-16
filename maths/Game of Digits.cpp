#include<bits/stdc++.h>
using namespace std;

string smallestK(long long n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long n;
        cin>>n;
        cout<< smallestK(n) << endl;
	}
	return 1;
}

#define MAX 50 
#include <string>
string smallestK(long long n)
{
    string s = "";

	if (n >= 0 && n <= 9) 
	{
		s+=to_string(n); 
		return s;
	}
 
	stack<int> digits; 

	for (int i=9; i>=2 && n > 1; i--) 
	{ 
		while (n % i == 0) 
		{ 
 
			digits.push(i); 
			n = n / i; 
		} 
	} 

	if (n != 1) 
		return "-1"; 

	long long int k = 0; 
	while (!digits.empty()) 
	{ 
		k = k*10 + digits.top(); 
		digits.pop(); 
	} 

	return to_string(k); 
}    

