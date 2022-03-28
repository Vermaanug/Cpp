#include <iostream>
using namespace std;

int avg(int a, int b, int c)
{
    int d;
    d = (a + b + c) / 3;
    return d;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter the First No : ";
    cin >> num1;
    cout << "Enter the Second No : ";
    cin >> num2;
    cout << "Enter the third No : ";
    cin >> num3;
    cout << "The Average of three No is " << avg(num1, num2, num3) << endl;

    return 0;
}

/*
Output : 

Enter the First No : 24
Enter the Second No : 51
Enter the third No : 25
The Average of three No is 33

*/