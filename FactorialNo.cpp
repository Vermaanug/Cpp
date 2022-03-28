#include<iostream>
using namespace std;

// FActorial using  while loop and For loop

int main(){
    // Factorial Of Given No using For Loop
    // int n ;
    // int Factorial = 1;
    // cout<<"Enter the No : ";
    // cin>>n;
    // for(int i = 1 ; i <= n ; ++i){
    //     Factorial *= i ;
    // }
    // cout<<"The Factorial of "<<n<<" is "<<Factorial<<endl;

    // Factorial Of Given No using While Loop
    int n , i = 1 ;
    int Factorial = 1;
    cout<<"Enter the No : ";
    cin>>n;
    while(i <= n){
        Factorial *= i;
        i++;
    }
    cout<<"The Factorial of "<<n<<" is "<<Factorial<<endl;
    return 0 ;
}

/*
Output: 

Enter the No : 6
The Factorial of 6 is 720

*/