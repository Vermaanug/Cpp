#include<iostream>
using namespace std;

// Factorial Calcu

int factorial(int n){
    if (n <= 1){
        return 1 ;
    }
    return n * factorial(n -1);
}

int main(){
    int a ;
    cout<<"Enter the No : ";
    cin>>a;
    cout<<"The Factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}   

/*
OutPut:

Enter the No : 6
The Factorial of 6 is 720

*/