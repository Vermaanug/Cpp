#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count ;
    public:
        void setdat(void){
            cout<<"Enter the id : ";
            cin>>id;
            count++;
        }

        void getdata(void){
            cout<<"The Id of Employee is "<<id<<" and this is Employee No "<<count<<endl;
        }
};

// Count is the Static Member of Class
int Employee::count;

int main(){
    Employee harry , Anurag;
    harry.setdat();
    harry.getdata();

    Anurag.setdat();
    Anurag.getdata();

    return 0;
}   