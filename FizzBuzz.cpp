#include <iostream>
using namespace std;

void fizzbuzz(int n)
{   
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else if(!(i%3==0 && i%5==0)){
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the No : ";
    cin >> n;
    fizzbuzz(n);
    return 0;
}

/*
OutPut: 

Enter the No : 15
1   
2   
Fizz
4   
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz

*/