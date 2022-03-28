#include <iostream>
using namespace std;

void printtable(int *ptr, int num, int n)
{
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << num << " X " << i + 1 << " = " << ptr[i] << endl;
    }
}

int main()
{
    int multi[3][10];
    printtable(multi[0], 2, 10);
    printtable(multi[1], 7, 10);
    printtable(multi[2], 9, 10);
    return 0;
}

/*
Output : 

2 X 1 = 2 
2 X 2 = 4 
2 X 3 = 6 
2 X 4 = 8 
2 X 5 = 10
2 X 6 = 12
2 X 7 = 14
2 X 8 = 16
2 X 9 = 18
2 X 10 = 20
7 X 1 = 7
7 X 2 = 14
7 X 3 = 21
7 X 4 = 28
7 X 5 = 35
7 X 6 = 42
7 X 7 = 49
7 X 8 = 56
7 X 9 = 63
7 X 10 = 70
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