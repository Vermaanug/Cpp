#include <iostream>
using namespace std;

void sum(int x, int y , int *su)
{
    *su = x + y;
}

int main()
{
    int a, b, c;
    // int *pa = &a;
    cout << "Enter the Value of a and b " << endl;
    cin >> a >> b ;
    sum(a, b , &c);
    cout<<"The Sum of a and b is "<<c<<endl;

    return 0;
}

/*
Output : 

Enter the Value of a and b 
45
65
The Sum of a and b is 110

*/