#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    cout<<"We have String "<<s1<<endl;
    int i;
    for(i=0;i<5;i++)
    s1.push_back('o');
    cout<<"We have String After push_back "<<s1<<endl;
    
    for(i=0;i<5;i++)
    s1.pop_back();
    cout<<"We have String After pop_back "<<s1<<endl;
    s1.resize(14);
    cout<<"We have String After resize() "<<s1<<endl;
    
    cout<<"We have capacity of string using capacity() "<<s1.capacity()<<endl;
    
    cout<<"We have length of String After length() "<<s1.length()<<endl;
    
    s1.shrink_to_fit();
    cout<<"We have new capacity of String After s1.shrink_to_fit() "<<s1.capacity()<<endl;
    return 0;
}


/*
We have String hello Dear, My name is Shruti Yadav. And I do code in C++.
We have String After push_back hello Dear, My name is Shruti Yadav. And I do code in C++.ooooo
We have String After pop_back hello Dear, My name is Shruti Yadav. And I do code in C++.
We have String After resize() hello Dear, My
We have capacity of string using capacity() 120
We have length of String After length() 14
We have new capacity of String After s1.shrink_to_fit() 15
*/