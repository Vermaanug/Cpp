#include<iostream>
using namespace std;

int sum(int *a , int *b){
    int *c;
    *c = *a + *b;
    return *c;
}

int avg(int *a , int *b){
    int *c ;
    *c = (*a+*b)/2;
    return *c;
}

int main(){
    int num1 , num2 ;
    cout<<"Enter the 1st No : ";
    cin>>num1;
    cout<<"ENter the 2nd Num : ";
    cin>>num2;
    cout<<"The Sum of Two No is "<<sum(&num1 ,&num2)<<endl;
    cout<<"The Avg of Two No is "<<avg(&num1,&num2)<<endl;

    return 0;
}   

/*
Output : 

Enter the 1st No : 4
ENter the 2nd Num : 5
The Sum of Two No is 9
The Avg of Two No is 4

 */