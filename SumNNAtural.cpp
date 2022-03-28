#include<iostream>
using namespace std;

int sum(int n ){
    if(n < 1){
        return n ;
    }
    return n + sum(n-1);

}

int main(){
    int a ; 
    cout<<"Enter the No : ";
    cin>>a;
    cout<<"The Sum of First N Natural Number is "<<sum(a)<<endl;

    return 0;
}   

/*
Output : 

Enter the No : 5
The Sum of First N Natural Number is 15

*/