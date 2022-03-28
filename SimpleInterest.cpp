#include <iostream>
using namespace std;

int main()
{
    float si, p, r, t;
    cout<<"Enter the Principle Amount : ";
    cin>>p;
    cout<<"Enter the rate : ";
    cin>>r;
    cout<<"Enter the time in years : ";
    cin>>t;
    si=(p*r*t)/100 ;
    cout<<"Simple Intrest = "<<si;
}

/*
Output : 

Enter the Principle Amount : 1000
Enter the rate : 4
Enter the time in years : 1
Simple Intrest = 40

*/