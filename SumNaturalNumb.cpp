#include<iostream>
using namespace std;

// To Print the Sum of First n NAtural Numbers
int main(){
    /*Using For Loop*/ 
    // int n ;
    // int sum = 0 ;
    // cout<<"Enter the No : ";
    // cin>>n;
    // for(int i = 0 ; i <= n ; i++){
    //     sum += i;
    // }
    // cout<<"The Sum of n Natural No is "<<sum<<endl;

    // Using While Loop 
    // int n ;
    // int sum = 0 , i = 0 ;
    // cout<<"Enter the No : ";
    // cin>>n;
    // while(i <= n){
    //     sum += i ;
    //     i++;
    // }
    // cout<<"The Sum of n Natural No is "<<sum<<endl;

    // Using Do While Loop
    int n ;
    int sum = 0 , i = 0 ;
    cout<<"Enter the No : ";
    cin>>n;
    do{
        sum += i;
        i++;
    }while(i <= n);
    cout<<"The Sum of n Natural No is "<<sum<<endl;
    return 0;
}

/*
Output : 

Enter the No : 8
The Sum of n Natural No is 36

*/