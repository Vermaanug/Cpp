#include<iostream>
using namespace std;

int main(){
    // Pointers in C++ 
    int a = 4 ;
    int* b = &a ;
    int** c = &b ;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;
    cout<<"The value of a is "<<**c<<endl;

    return 0;
}   

/*
output : 

The value of a is 4
The value of a is 4
The value of a is 4

*/