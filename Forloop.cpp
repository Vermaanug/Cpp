#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter the No : ";
    cin>>a;
    for(int i = 1 ; i <= 10 ; i++){
        cout<<i * a<<endl;
    }
    return 0;
}

/*
Output : 

Enter the No : 4
4 
8 
12
16
20
24
28
32
36
40

*/