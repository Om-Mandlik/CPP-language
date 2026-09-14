#include<iostream>
using namespace std;
//Function Template
template <typename T>
T add(T a, T b){
    return a + b;
}
int main(){
    int x = 5, y = 10;
    double m = 5.5, n = 10.5;
    cout<<"Sum of integers:"<<add(x,y)<<endl;
    cout<<"Sum of doubles:"<<add(m,n)<<endl;
    return 0;
}