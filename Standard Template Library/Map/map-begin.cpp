#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int>my_map;
    int i;
    for(i=0;i<5;i++)
        my_map[to_string(i)] = i*i;
    map<string,int>::iterator it;
    for(it=my_map.begin();it!=my_map.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}


/*
Output:
0 0
1 1
2 4
3 9
4 16

Process returned 0 (0x0)   execution time : 0.319 s
Press any key to continue.
*/
