#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);           
    void printnumber(void){
        cout<<"Your Number is "<<a<<" + "<<b<<"i "<<endl;
    }
};

Complex :: Complex(void){         
    cout<<"Enter the No : ";
    cin>>a;
    cout<<"Enter the No : ";
    cin>>b;
   
}

int main()
{
    Complex c1;
    c1.printnumber();
    return 0;
}

/*
OutPut : 

Enter the No : 5
Enter the No : 4
Your Number is 5 + 4i 

*/