#include<bits/stdc++.h>
using namespace std;

template <typename T>
void disp_v(vector<T> & v) {
    if(!v.size()) return;
    if(typeid(T) == typeid(bool)) {
        for(bool e :  v) { cout << ( e ? "T" : "F" ) << " "; }
    } else {
        for(T e :  v) { cout << e << " "; }
    }
    cout << endl;
}

int main() {
    vector<long> v1 = { 26, 52, 79, 114, 183 };
    vector<long> v2 = { 52, 2, 72, 114 ,5 };
    vector<bool> v3(v1.size());
    disp_v(v1);
    disp_v(v2);
    cout << endl;
    
    not_equal_to<long> f;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), f);
    disp_v(v3);
    
    return 0;
}