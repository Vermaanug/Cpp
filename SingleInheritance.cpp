#include<iostream>
using namespace std;

class Base{
    int data1;   
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void Base :: setdata(void){
    data1 = 12;
    data2 = 24;
}

int Base ::  getdata1(){
    return data1;
}

int Base ::  getdata2(){
    return data2;
}

class Derived : public Base{
    int data3;
    public:
    void Process();
    void Display();

};

void Derived :: Process(void){
    data3 = data2 * getdata1();
}

void Derived :: Display(){
    cout<<"The Value of data 1 is "<< getdata1() <<endl;
    cout<<"The Value of data 2 is "<< data2 <<endl;
    cout<<"The Value of data 3 is "<< data3 <<endl;
}


int main(){
    Derived der;
    der.setdata();
    der.Process();
    der.Display();
    return 0;
}   

/*
Output : 

The Value of data 1 is 12
The Value of data 2 is 24
The Value of data 3 is 288

*/