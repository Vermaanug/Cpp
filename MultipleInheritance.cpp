#include<iostream>
using namespace std;

//The syntax of inheriting multiple inheritances 
// class Derived: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };


class Base1{
    protected:
    int data1;
    public:
        void set_data1(int a){
            data1 = a;
        }
        void get_data1(void){
            cout<<"The Value of Data 1 is "<<data1<<endl;
        }
};

class Base2{
    protected:
    int data2;
    public:
        void set_data2(int a){
            data2 = a;
        }
        void get_data2(void){
            cout<<"The Value of Data 1 is "<<data2<<endl;
        }
};

class Derived : public Base1 , public Base2{
    int data3;
    public:

        void Display(void){
            get_data1();
            get_data2();
            cout<<"The Value of Data 3 is "<<(data1+data2)<<endl;
        }

};

int main(){
    Derived Del;
    Del.set_data1(23);
    Del.set_data2(34);
    Del.Display();

    return 0;
}   

/*
OutPut : 

The Value of Data 1 is 23
The Value of Data 1 is 34
The Value of Data 3 is 57

*/