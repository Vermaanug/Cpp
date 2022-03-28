#include<iostream>
using namespace std;

// class Calculator;

class Complex{
    int a, b ;
    // friend class Calculator ;
    public:
        // friend int Sumcomplex( Complex o1, Complex o2) ;
        void setdata(int n1 , int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
        }

        void SumComplex(Complex o1 , Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        
};

int main(){
    Complex o1, o2 ,o3;
    o1.setdata(2 , 4);
    o2.setdata(5 , 6);

    o3.SumComplex(o1, o2);
    o3.printNumber();

    return 0;
}  

/*
Output : 

Your number is 7 + 10i

*/