#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int>my_map;
    my_map = {
    {"one",1},
    {"two", 2},
    {"three",3},
    {"four",4},
    };
    cout<<"My Map before using at()"<<endl;
    for (auto& x: my_map) {
    cout << x.first << ": " << x.second << '\n';
    }

    my_map.at("two") = 20;
    my_map.at("three") = 30;
    cout<<"My Map before using at()"<<endl;
    for (auto& x: my_map) {
    cout << x.first << ": " << x.second << '\n';
    }
    return 0;
}


/*
Output:
My Map before using at()
four: 4
one: 1
three: 3
two: 2
My Map before using at()
four: 4
one: 1
three: 30
two: 20

Process returned 0 (0x0)   execution time : 0.263 s
Press any key to continue.
*/
