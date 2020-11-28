#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}

int equilibriumPoint(long long a[], int n) {
    long long int i, s=0, l_sum=0, f=-1;
    for(i=0;i<n;i++)
    s+=a[i];
    
    for(i=0;i<n;i++)
    {
        s-=a[i];
        if(s==l_sum)
        {
            f = i+1;
            break;
        }
        l_sum+=a[i];
    }
    return f;
}