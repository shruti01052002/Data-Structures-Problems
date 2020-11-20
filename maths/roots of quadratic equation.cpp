#include <bits/stdc++.h>
#include<cmath>
using namespace std;

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        int d=(b*b)-(4*a*c);
        double sqr_val=sqrt(d);   
        vector <int> factor;
        if(d>0)
        {
            int f1=floor((-b+sqr_val)/(2*a));
            int f2=floor((-b-sqr_val)/(2*a));
            factor.push_back(max(f1,f2));  
            factor.push_back(min(f1,f2));  
        }
        else if(d==0)
        {
            int f1=(-b+sqr_val)/(2*a);
            factor.push_back(f1);
            factor.push_back(f1);
        }
        else if(d<0)
        {
            factor.push_back(-1);
        }
        return factor;
    }
    
};



int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
} 