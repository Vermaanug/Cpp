#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x ,y ;
    public:
        friend double differencebetween(Point , Point);
        Point(int a , int b){
            x = a ;
            y = b ;
        }

        void displaypoint(){
            cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
        }
};

double differencebetween(Point p1 , Point p2){
        double res = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
        return res;
}

int main(){
    Point p(1 ,0);
    p.displaypoint();

    Point q(70 ,0);
    q.displaypoint();

    double result = differencebetween(p,q);
    cout<<"The Distance Between Point p and q is "<<result<<endl;
    return 0;
}   

/*
OutPut :

The point is (1 , 0)
The point is (70 , 0)
The Distance Between Point p and q is 69

*/