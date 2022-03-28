#include<iostream>
using namespace std;

// Fibonacci Series 

int fib(int n){
    if (n < 2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a ;
    cout<<"Enter the No : ";
    cin>>a;
    cout<<"The term at fibbonacci series at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}   

/*
OutPut : 

Enter the No : 8
The term at fibbonacci series at position 8 is 34

*/