#include<bits/stdc++.h>

using namespace std;

template<typename T>
T pi = T(3.1415926535897932385L);

template<typename T>
T area_of_circle(const T &r){
    return r * r * pi<T>;
}

int main(){
    cout.precision(20);
    cout<< pi<long double> <<endl;
    cout<< area_of_circle<long double>(3)<<endl;
}