#include<iostream>
using namespace std;

int main(){
    // Pointer and Arrays 
    int num[] = {4 , 8 , 6 , 5};
    int* a = num;
    // cout<<"The Value of 1st num is "<<*a<<endl;  // Print the Value of 1st num
    // a++;
    // cout<<"The Value of 2nd num is "<<*a<<endl;  // Print the Value of 2nd num

    cout<<"The Address of 1st No is "<<a<<endl;  //Print the address of 1st No
    cout<<"The Address of 1st No is "<<&num[0]<<endl;//Print the address of 1st No
    cout<<"The Address of 2nd No is "<<&num[1]<<endl;//Print the address of 2nd No
    cout<<"The Address of 2nd No is "<<(a+1)<<endl;//Print the address of 2nd No

    cout<<"The value of a is "<<*a<<endl; //Print the value of 2nd num
    ++a;
    cout<<"The value of a is "<<*a<<endl; //Print the value of 3rd num

    return 0;
}

/*
Output : 

The Address of 1st No is 0x61fefc
The Address of 1st No is 0x61fefc
The Address of 2nd No is 0x61ff00
The Address of 2nd No is 0x61ff00
The value of a is 4
The value of a is 8

*/