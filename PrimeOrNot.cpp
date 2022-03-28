#include<iostream>
using namespace std;

int main(){
    int n ;
    bool is_prime = true ;
    cout<<"Enter the No : ";
    cin>>n;
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            is_prime = false;
            break;
        }
    }
    if(is_prime){
        cout<<"The Number is prime ";
    }
    else{
        cout<<"The Number is not  Prime ";
    }
    
    return 0;
}

/*
Output : 

Enter the No : 5
The Number is prime 

*/