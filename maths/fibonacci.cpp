#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main ()
{
    int n = 9;
    cout << fib(n);
    getchar();
    return 0;
}

//  Brian Kernighan's Algorithm:
// unsigned int countSetBits(int n)
//     {
//         unsigned int count = 0;
//         while (n) {
//             n &= (n - 1);
//             count++;
//         }
//         return count;
//     }
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << __builtin_popcount(4) << endl;
//     cout << __builtin_popcount(15);

//     return 0;
// }

// int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
//                         1, 2, 2, 3, 2, 3, 3, 4 };

// /* Recursively get nibble of a given number 
// and map them in the array */
// unsigned int countSetBitsRec(unsigned int num)
// {
//     int nibble = 0;
//     if (0 == num)
//         return num_to_bits[0];

//     // Find last nibble
//     nibble = num & 0xf;


//O(1)
//     // Use pre-stored values to find count
//     // in last nibble plus recursively add
//     // remaining nibbles.
//     return num_to_bits[nibble] + countSetBitsRec(num >> 4);
// }


// int getSetBitsFromOneToN(int N){
//     int two = 2,ans = 0;
//     int n = N;
//     while(n){
//         ans += (N/two)*(two>>1);
//         if((N&(two-1)) > (two>>1)-1) ans += (N&(two-1)) - (two>>1)+1;
//         two <<= 1;
//         n >>= 1;
//     }
//     return ans;
// }