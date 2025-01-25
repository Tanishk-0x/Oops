
// used to deallocate the given memory .. 

// new -----> delete 


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


        void printkrdo(){
            cout<<"name is : "<< name <<endl ; 
            cout<<"cgpa is : "<< *cgpaPtr << endl ; 
        }

        // // destructor .. 
        // ~Student() {
        //     cout<<"destructor is called " ; 
        // }

        // destructor to free dynamically allocated memory .. 
        ~Student() {
            cout<<" Hi' I am  called " ; 

            delete cgpaPtr ; 
        }

}; 


int main () {

    Student s1("rahul" , 8.5) ; 
    s1.printkrdo() ; 



    return 0 ; 
}
