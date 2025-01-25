


#include<iostream>
#include<string>
using namespace std ; 

class Teacher {

public:

    // properties / attributes 
        string name ; 
        string dept ; 
        string subject ; 
        double salary ; 


    // non-parameterised constructor .. 
    Teacher(){
        cout<<"constructor is callled "<<endl ; 

        dept = "computer science " ; 
    }

    //parameterised constructor .. 
    Teacher(string n , string d , string sub , double sal ){
        name = n ; 
        dept = d ; 
        subject = sub ; 
        salary = sal ; 
    }

    // print function .. 
    void printkrdo(){
        cout<<"name is " << name << endl ; 
        cout<<"salary is "<< salary << endl ; 
    }

    // // using this operator .. 
    //     Teacher(string name , string dept , string subject , double salary ){
    //     this->name = name ; 
    //     this->dept = dept ; 
    //     this->subject = subject ; 
    //     this->salary = salary ; 
    // }

    // copy contructor .. 
    // special constructor used to copy properties of one object into another .. 
    // pass by refernce 
    Teacher(Teacher &orgObj){

        cout<<" I am custom copy constructor " <<endl ; 

        this->name = orgObj.name ; 
        this->dept = orgObj.dept ; 
        this->subject = orgObj.subject ; 
        this->salary = orgObj.salary ; 
    }


}; 

// -------------------------------------------------------------

int main () {
    
    // Teacher t1 ; // automatically calls to constructor 

    Teacher t2 ("tanishk" , "comp science" , "C++" , 125000) ; // called parameterised constructor .. 

    // calling print function .. 
    t2.printkrdo() ;
    
    // calling default copy contructor .. 
    Teacher t3(t2) ; 
    t3.printkrdo() ; 



    return 0 ; 
}