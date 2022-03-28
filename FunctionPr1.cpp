#include<iostream>
using namespace std;

/// Program that convert Celcius into Farhenite

float far(float a){
    float res;
    res =  (float)( a * 9/5) + 32;
    return res;

}

int main(){
    float cel ;
    cout<<"Enter the temperature in celcius : ";
    cin>>cel;

    cout<<"The Temperature into Farhenite are "<<far(cel)<<endl;

    return 0;
}   

/*
Output : 

Enter the temperature in celcius : 45
The Temperature into Farhenite are 113

*/