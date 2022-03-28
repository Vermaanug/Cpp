#include <iostream>
using namespace std;

class BankDeposit
{
    int Amount;
    int Years;
    float Interest;
    float returnvalue;

public:
    BankDeposit(){};
    BankDeposit(int a , int y , int i);
    BankDeposit(int a , int y , float i);
    void show();
};


BankDeposit :: BankDeposit(int a, int y, int i)
{
    Amount = a;
    Years = y;
    Interest = float(i)/100;
    returnvalue =Amount;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+Interest);
    }
}

BankDeposit :: BankDeposit(int a , int y , float i){
        Amount = a ;
        Years = y ;
        Interest = i ;
        returnvalue = Amount;
        for(int i = 0 ; i < y ; i++){
             returnvalue = returnvalue * (1+Interest);
        }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<Amount
        << ". Return value after "<<Years
        << " years is "<<returnvalue<<endl;
}

int main()
{
    BankDeposit bd1 , bd2 ;
    int a, y;
    float i;
    int R;

    cout<<"Enter the Value of a , y and i"<<endl;
    cin>>a>>y>>i;
    bd1 = BankDeposit(a ,y , i);
    bd1.show();

    cout<<"Enter the Value of a , y and i"<<endl;
    cin>>a>>y>>R;
    bd2 = BankDeposit(a ,y , R);
    bd2.show();
    return 0;
}

/*
OutPut : 

Enter the Value of a , y and i
500
1
0.04

Principal amount was 500. Return value after 1 years is 520
Enter the Value of a , y and i
500
1
4

Principal amount was 500. Return value after 1 years is 520

*/