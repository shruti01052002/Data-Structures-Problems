#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    int i;
    int arr[] = {20, 10, 30, 100, 50, 60, 90, 80, 70, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    //declaring a vector
    vector<int> vect(arr, arr+n);
    cout<<"Here We have vector is: "<<endl;
    for(i=0;i<n;i++)
        cout<<vect[i]<<" ";
    cout<<endl;
    cout<<"Sorting of vector in ascending order: "<<endl;
    sort(vect.begin(), vect.end());
    for(i=0;i<n;i++)
        cout<<vect[i]<<" ";
    cout<<endl;
    cout<<"Sorting of vector in descending order: "<<endl;
    sort(vect.begin(), vect.end(), greater<int>());
    for(i=0;i<n;i++)
        cout<<vect[i]<<" ";
    cout<<endl;
    cout<<"Reverse of vector: "<<endl;
    //reverse(first_iterator, last_iterator) - To reverse a vector.
    reverse(vect.begin(), vect.end());
    for(i=0;i<n;i++)
        cout<<vect[i]<<" ";
    cout<<endl;
    cout<<"Maximum Element of vector: "<<endl;
    //*max_element (first_iterator, last_iterator) - To find the maximum element of a vector.
    cout<<*max_element(vect.begin(), vect.end())<<endl;
    cout<<"Minimum Element of vector: "<<endl;
    //*min_element (first_iterator, last_iterator) - To find the minimum element of a vector.
    cout<<*min_element(vect.begin(), vect.end())<<endl;
    //accumulate(first_iterator, last_iterator, initial value of sum) - Does the summation of vector elements
    cout<<"Sum of Elements of vector"<<endl;
    cout<<accumulate(vect.begin(), vect.end(), 0)<<endl;

    return 0;
}

/*
OUTPUT:
Here We have vector is:
20 10 30 100 50 60 90 80 70 40
Sorting of vector in ascending order:
10 20 30 40 50 60 70 80 90 100
Sorting of vector in descending order:
100 90 80 70 60 50 40 30 20 10
Reverse of vector:
10 20 30 40 50 60 70 80 90 100
Maximum Element of vector:
100
Minimum Element of vector:
10
Sum of Elements of vector
550

Process returned 0 (0x0)   execution time : 0.113 s
Press any key to continue.
*/
