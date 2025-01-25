#include<iostream> 
#include<string> 
using namespace std ; 

class Student{

    public: 

        string name ; 
        double* cgpaPtr ; 

        Student(string name , double cgpa ){
            this->name = name ; 

            cgpaPtr = new double ; 
            *cgpaPtr = cgpa ; 
        }

        Student(Student &obj){
            this->name = obj.name ; 
            
            cgpaPtr = new double ; 
            *cgpaPtr = *obj.cgpaPtr ; 
        }

        void printkrdo(){
            cout<<"name is : "<< name <<endl ; 
            cout<<"cgpa is : "<< *cgpaPtr << endl ; 
        }

}; 


int main () {

    Student s1("rahul" , 8.5) ; 

    Student s2(s1) ; 
    s1.printkrdo() ; 


    // change dynamically 
    *(s2.cgpaPtr) = 9.2 ; 
    s2.name = "neha kumar" ; 
    s2.printkrdo() ;

    return 0 ; 
}