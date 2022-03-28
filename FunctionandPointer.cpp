#include <iostream>
using namespace std;

// Function And Pointers

void tentime(int *n)
{
    *n = *n * 10;
}

int main()
{
    int n;
    cout << "Enter the No : ";
    cin >> n;
    cout << "The Value of n is " << n << endl;
    tentime(&n);
    cout << "The Value of n after ten times is " << n << endl;

    return 0;
}

/*
Output : 

Enter the No : 4
The Value of n is 4
The Value of n after ten times is 40

*/