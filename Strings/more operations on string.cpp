#include<iostream> 
#include<string> 
using namespace std; 
int main() 
{ 
    string str = "This is string"; 

    std::string::iterator it; 

    std::string::reverse_iterator it1; 

    cout << "The string using forward iterators is : "; 
    for (it=str.begin(); it!=str.end(); it++) 
    cout << *it; 
    cout << endl; 

    cout << "The reverse string using reverse iterators is : ";
    for (it1=str.rbegin(); it1!=str.rend(); it1++) 
    cout << *it1; 
    cout << endl; 
    string str1 = "This is also String "; 

    string str2 = "Strig is cool"; 
    cout<<endl;
    char ch[80]; 
  
    str1.copy(ch,13,0); 

    cout << "The new copied character array is : "; 
    cout << ch << endl; 

    cout << "The 1st string before swapping is : "; 
    cout << str1 << endl; 
    cout << "The 2nd string before swapping is : "; 
    cout << str2 << endl; 

    str1.swap(str2); 

    cout << "The 1st string after swapping is : "; 
    cout << str1 << endl; 
    cout << "The 2nd string after swapping is : "; 
    cout << str2 << endl; 
  
    return 0; 
  
} 

/*
Output:
The string using forward iterators is : This is string
The reverse string using reverse iterators is : gnirts si sihT

The new copied character array is : This is also 
The 1st string before swapping is : This is also String 
The 2nd string before swapping is : Strig is cool
The 1st string after swapping is : Strig is cool
The 2nd string after swapping is : This is also String 
*/