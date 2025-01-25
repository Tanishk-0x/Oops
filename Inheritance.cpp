
#include<iostream>
#include<string> 
using namespace std ; 

class Person {

// name , age 

    public: 
        string name ; 
        int age ; 


    // Person(string name , int age ){
    //     this->name = name ; 
    //     this->age = age ; 
    // }    

    Person(){
        cout<<"parent constructor"<<endl ; 
    }

}; 

// name , age , roll no 
// inherit name and age from person class .. 

class Student : public Person {

    public: 
        int rollno ; 

    Student(){
        cout<<"child constructor"<<endl ; 
    }

//name and age is inherited .. 

    void getInfo(){
        cout<<"name is : "<< name << endl ; 
        cout<<"age is : "<< age << endl ; 
        cout<<"rollno is : "<< rollno << endl ; 
    }    
} ; 


//-----------------------------------------------------

int main () {

    Student s1 ; 

    s1.name = "tanishk" ; 
    s1.age = 18 ; 
    s1.rollno = 5429 ; 

    s1.getInfo() ; 


    return 0 ; 
}