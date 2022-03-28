#include<iostream>
using namespace std;

// Claculator Using Inheritance

class Calculator{
    int a , b ;
    public:
        void Set_value(int a1 , int a2){
           a = a1;
           b = a2;
        }
        
        void Addition(void){
            cout<<"The Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }
        void Substraction(void){
            cout<<"The Substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        }
        void Multiplication(void){
            cout<<"The Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        }
        void Division(void){
            cout<<"The Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        }
        

};

int main(){
    Calculator Anu;
    int a , b , op;
    cout<<" 1.Addition\n 2.Substraction\n 3.Multipication\n 4.Dividion\n"<<endl;
    cin>>op;
    cout<<"Enter the Value Of a and b : "<<endl;
    cin>>a>>b;
    Anu.Set_value(a , b);
    switch (op)
    {
    case 1:
        Anu.Addition();
        break;
    case 2 :
        Anu.Substraction();
        break;
    case 3 :
        Anu.Multiplication();
        break;
    case 4 :
        Anu.Division();
    return 0;
    }
}   


/*
OutPut : 

1.Addition     
 2.Substraction 
 3.Multipication
 4.Dividion     

3
Enter the Value Of a and b : 
4
5
The Multiplication of 4 and 5 is 20

*/