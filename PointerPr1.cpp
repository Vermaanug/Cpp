#include<iostream>
using namespace std;

int main(){
    int a = 4 ;
    int* b = &a ;
    cout<<"The Address of a is "<<a<<endl;
    cout<<"The Value of a is "<<*b<<endl;
    return 0;
}   

/*
OutPut : 

The Address of a is 4
The Value of a is 4  

*/