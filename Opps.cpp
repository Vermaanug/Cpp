#include<iostream>
using namespace std;

class Employee{
    int a ,b ,c ;
    public:
        int d , e ;
        void setdata(int a1 , int b1 ,int c1);
        void getdata(); 
};

void Employee :: getdata(){
    cout<<"The Value of a is "<<a<<endl;
    cout<<"The Value of b is "<<b<<endl;
    cout<<"The Value of c is "<<c<<endl;
    cout<<"The Value of d is "<<d<<endl;
    cout<<"The Value of e is "<<e<<endl;
}

void Employee :: setdata(int a1 , int b1 , int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee Harry;
    Harry.d = 45;
    Harry.e = 8;
    Harry.setdata(24,54,23);
    Harry.getdata();
    return 0;
}   


/*
Output : 

The Value of a is 24
The Value of b is 54
The Value of c is 23
The Value of d is 45
The Value of e is 8 

*/