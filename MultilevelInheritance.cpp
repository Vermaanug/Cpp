#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
        void set_rollno(int);
        void get_rollno();
};

void Student :: set_rollno(int a){
    roll_no = a ;
}

void Student :: get_rollno(void){
    cout<<"Your Roll no is "<<roll_no<<endl;
}

class Exam : public Student{
    protected:
    float maths;
    float physics;
    public:
        void set_marks(float , float);
        void get_marks();
};

void Exam :: set_marks(float m1 , float p1){
    maths = m1 ;
    physics = p1 ;
}

void Exam :: get_marks(void){
    cout<<"Your Marks in Maths are "<<maths<<endl;
    cout<<"Your Marks in Physics are "<<physics<<endl;
}

class Results : public Exam{
    float percentage;
    public:
        void display_result();

};

void Results :: display_result(void){       
    get_rollno();
    get_marks();
    cout<<"Your Percentage is "<<(maths+physics)/2<<"%"<<endl;
}

int main(){
    Results Anurag;
    Anurag.set_rollno(06);
    Anurag.set_marks(95 , 85);
    Anurag.display_result();

    // int r ;
    // float m , p ;
    // cout<<"Enter Your Roll No : ";
    // cin>>r;
    // Anurag.set_rollno(r);
    // cout<<"Enter the Marks in Maths and Physics : "<<endl;
    // cin>>m>>p;
    // Anurag.set_marks(m , p);
    // Anurag.display_result();
    return 0;
}   

/*
Output : 

Your Roll no is 6
Your Marks in Maths are 95  
Your Marks in Physics are 85
Your Percentage is 90%  

*/