#include<iostream>
using namespace std;

int main(){
    int num1 , num2, num3 , num4 ;
    cout<<"Enter the Num1 : ";
    cin>>num1;
    cout<<"Enter the Num2 : ";
    cin>>num2;
    cout<<"Enter the Num3 : ";
    cin>>num3;
    cout<<"Enter the Num4 : ";
    cin>>num4;
    if(num1 > num2 ){
        if (num1 > num3){
            if(num1 > num4){
                cout<<num1<<" is Greatest \n";
            }
            else{
                cout<<num4<<" is Greatest \n";
            }
        }
    }
    else if (num2 > num3){
        if(num2 > num4){
            cout<<num2<<" is Greatest \n";
        }
        else{
            cout<<num4<<" is Greatest \n";
        }
    }
    else if (num3 > num4){
        cout<<num3<<" is Greatest \n";
    }
    else{
        cout<<num4<<" is Greatest \n";
    }
    
    return 0;
}

/*
OutPut : 

Enter the Num1 : 45
Enter the Num2 : 25
Enter the Num3 : 21
Enter the Num4 : 21
45 is Greatest 

*/