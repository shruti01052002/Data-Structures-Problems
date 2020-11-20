/** GCD (Greatest Common Divisor) 
 **/

#include <iostream>
#include<cmath>
using namespace std;

int GCD(int a, int b)
{
    if(a==0)
    return b;
    return GCD(b%a, a);
}

int main() {
    // Write C++ code here
    int n1, n2;
    cout<<"Enter the Number 1: \n";
    cin>>n1;
    cout<<"Enter the Number 2: \n";
    cin>>n2;
    int result = GCD(n1, n2);
    cout<<"Greatest Common Divisor of "<<n1<<" and "<<n2<<" is "<<result;
    return 0;
}