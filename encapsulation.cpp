
// encapsulation matleb data member aur menber function ko ek single unit (class) me wrap kr dena .. 
// helps in data hiding 

#include<iostream>
#include<string>
using namespace std ; 

class Teacher {

  // access modifier
    private: 
        double salary ; 


  // access modifier
    public: 

    // properties / attributes 
        string name ; 
        string dept ; 
        string subject ; 

    // methods / member function 
    void changedept(string newDept){
        dept = newDept ; 
    }

    // function to retrive fron private // setter
    void setSalary(double s){
        salary = s ; 
    }

    // getter 
    double getSalary(){ 
        return salary ; 
    }

}; 

// -------------------------------------------------------------

int main () {
    // creating object 
    Teacher t1 ; 

    t1.dept = "civil" ; 
    cout<<t1.dept ; 

    // accessing private member .. 
    t1.setSalary(12500) ; 
    cout<<t1.getSalary() ; 

    return 0 ; 
}