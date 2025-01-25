
#include<iostream> 
#include<string>
using namespace std ; 

class Parent {
    public: 

       void getInfo(){
            cout << "Parent Class "<<endl ; 
        }

} ; 

class Child : public Parent {

        public: 

       void getInfo(){
            cout << "Child Class "<<endl ; 
        }
}; 


int main (){

    Child c1 ;

    c1.getInfo() ;  


    return 0 ; 
}