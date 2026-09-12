#include<iostream>
using namespace std;

int main(){
    // normal pointer
    /*
    int x = 20;
    int* ptr = &x;
    cout<<ptr<<endl;
    
    // Array
    int arr[] = {1,2,3};
    int* p = arr;
    cout<<*p;

    */
    int x = 10;
    int y = 20;

    int* p = &x;

    p = &y;

    cout << *p;
    return 0;
}