#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "this is a string";
    cout << s1 << endl;
    
    string s2(s1.size(), '.');
    transform(s1.begin(), s1.end(), s2.begin(), ::toupper);
    
    cout << s2 << endl;

    return 0;
}