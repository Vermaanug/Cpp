#include<iostream>
using namespace std;

class Point{
    int x ,y ;
    public:
        Point(int a , int b){
            x = a ;
            y = b ;
        }

        void displaypoint(){
            cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
        }
};

int main(){
    Point p(1 ,1);
    p.displaypoint();
    return 0;
}   

/*
OutPut : 

The point is (1 , 1)

*/