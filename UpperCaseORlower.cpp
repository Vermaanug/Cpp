#include<iostream>
using namespace std;

int main(){
    char ch ;
    cout<<"Enter the Character : ";
    cin>>ch;
    if (ch <= 122 && ch >= 93){
        cout<<"It is LowerCase \n";
    }
    else{
        cout<<"It is UpperCase \n";
    }
    return 0;
}

/*
Output : 

Enter the Character : h
It is LowerCase

*/