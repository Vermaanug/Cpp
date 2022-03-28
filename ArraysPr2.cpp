#include<iostream>
using namespace std;

// Using Array Creating Multiplication Table  

int main(){ 
    int num ;
    int table[10];
    cout<<"Enter the Num : ";
    cin>>num;
    for(int i = 0 ; i < 10 ; i++){
        table[i] = num * (i + 1);

    }
    for(int i = 0 ; i < 10 ; i++){
        cout<<num<<" X "<<i+1<<" = "<<table[i]<<endl;
    }

    return 0;
}


/*
Output : 

Enter the Num : 9
9 X 1 = 9 
9 X 2 = 18
9 X 3 = 27
9 X 4 = 36
9 X 5 = 45
9 X 6 = 54
9 X 7 = 63
9 X 8 = 72
9 X 9 = 81
9 X 10 = 90

*/