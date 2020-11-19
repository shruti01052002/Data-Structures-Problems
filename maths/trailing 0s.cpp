/**Given a number N, the task is to count number of trailing zeroes in factorial of N. That is, number of zeroes at the end in the number N!.
 **/

#include <iostream>
#include<cmath>
using namespace std;

int main() {
    // Write C++ code here
    int n, s, d, f, i;
    long long int fact;
    cout<<"Enter the Number: \n";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    s = 0;
    d = 5;
    f = 1;
    while(1)
    {
        s = s+n/d;
        f++;
        d = pow(5, f);
        if(d>=n)
        break;
    }
    cout<<"Number of trailing 0s in factorial of "<<n<<" is "<<s;
    return 0;
}