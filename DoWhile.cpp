#include<iostream>
using namespace std;

// Printing table using do while loop

int main(){
    int a , i = 1 ;
    cout<<"Enter the No : ";
    cin>>a;
    do{
        cout<<i * a<<endl;
        i++;
    }while(i <= 10);
    return 0;
}

/*
OutpUt : 

Enter the No : 5
5
10
15
20
25
30
35
40
45
50

*/