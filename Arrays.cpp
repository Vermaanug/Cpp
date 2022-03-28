#include <iostream>
using namespace std;

int main()
{
    // Arrays in C++
    // Simple Program Take MArks as Input and Print them
    int marks[4];
    cout << "Enter the Marks for English , Hindi , Maths and Science : " << endl;
    cin >> marks[0] >> marks[1] >> marks[2] >> marks[3];
    cout << "The Marks of English is " << marks[0] << endl;
    cout << "The Marks of Hindi is " << marks[1] << endl;
    cout << "The Marks of Maths is " << marks[2] << endl;
    cout << "The Marks of Science is " << marks[3] << endl;

    ;
    return 0;
}

/*
Output : 

Enter the Marks for English , Hindi , Maths and Science : 
45
25
36
45
The Marks of English is 45
The Marks of Hindi is 25
The Marks of Maths is 36
The Marks of Science is 45

*/