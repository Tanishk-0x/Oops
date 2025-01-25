
// same naam ki multiple chije hoti he jaise below code me do constructors he same naam ke .. 

#include<iostream> 
#include<string>
using namespace std ; 

class Student{
    public: 

    string name ;

    // first contructor .. 
    Student() {
        cout<<"I a'm non-paramerterised contructor"<<endl ; 
    }

    //second constructor .. 
    Student(string name){
        this->name = name ; 
        cout<<"I a'm paramerterised contructor"<<endl ; 
        cout<<name ; 
    }

};


int main() {

    // Student s1 ; // calling non paramertised contructor .. 

    Student s1("tony stark") ; // parameterised contructor called .. 

    return 0 ; 
}