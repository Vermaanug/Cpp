#include<iostream>
using namespace std ;

int main(){
    int Eng , Sci , Math ;
    cout<<"Enter the Marks of Eng : ";
    cin>>Eng;
    cout<<"Enter the Marks of Sci : ";
    cin>>Sci;
    cout<<"Enter the Marks of Math : ";
    cin>>Math;
    int total = Eng + Sci + Math / 3 ;
    if( Eng <= 35 && Sci <= 35 && Math <= 35 && total <= 105){
        cout<<"You're Pass  ";
    }
    else{
        cout<<"You're Fail ";
    }
    return 0;
}


/*
OutPut : 

Enter the Marks of Eng : 45
Enter the Marks of Sci : 25
Enter the Marks of Math : 45
You're Fail 

*/