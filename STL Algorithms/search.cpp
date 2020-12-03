#include<bits/stdc++.h>
using namespace std;

template <typename T>
bool is_odd(const T & n) {
    return ((n % 2) == 1);
}

template <typename T>
void disp_v(const T & v) {
    if(!v.size()) return;
    for(auto e :  v) { cout << e << " "; }
    cout << endl;
}

int main() {
    // prime numbers < 100
    const vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    disp_v(v1);
        const vector<int> v2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    auto it = find_if(v1.begin(), v1.end(), is_odd<int>);
    auto c = count(v1.begin(),v1.end(),2);
    cout<<c<<endl;//Occurences
    auto m = search(v1.begin(),v1.end(),v2.begin(),v2.end());
   /* cout<<*it<<endl;
    auto end=v1.begin();
    cout<< *end<<endl;*/
    if(it != v1.end()) {
        size_t index = it - v1.begin();
        cout << "found at index " << index << ": " << *it << endl;
    } else {
        cout << "not found" << endl;
    }
    
    return 0;
}