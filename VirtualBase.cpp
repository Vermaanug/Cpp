#include<iostream>
using namespace std;

class Student{
    protected:
    int rollno;
    public:
        void Set_rollno(int a){
            rollno = a ;
        }
        void Print_rollno(void){
            cout<<"Your Roll No is "<<rollno<<endl;
        }
};

class Test : virtual public Student{
    protected:
    float maths , physics;
    public:
        void Set_marks(float m1 , float p1){
            maths = m1;
            physics = p1;
        }
        void Print_marks(void){
            cout<<"Your Result is here :"<<endl
                <<"Maths : "<<maths<<endl
                <<"Physics : "<<physics<<endl;
        }
};

class Sport : virtual public Student{
    protected:
    float score;
    public:
        void Set_Score(float sc){
            score = sc;
        }
        void Print_score(void){
            cout<<"Your Score is "<<score<<endl;
        }
};

class Result : public Test , public Sport{
    private:
    int result;
    public:
        void display(void){
            result = maths + physics  ;
            Print_rollno();
            Print_marks();
            Print_score();
            cout<<"Your Result is "<<result<<endl;
        }
};

int main(){
    Result Anu ;
    Anu.Set_rollno(06);
    Anu.Set_marks(78 , 97);
    Anu.Set_Score(8);
    Anu.display();
    return 0;
}

/*
Output : 

Your Roll No is 6    
Your Result is here :
Maths : 78
Physics : 97
Your Score is 8      
Your Result is 175  

*/