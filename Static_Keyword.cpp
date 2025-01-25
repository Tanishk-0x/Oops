
#include<iostream>
#include<string> 
using namespace std ; 

// x ek baar banke life time of programm tak memory ke andar persist krta he .. 

void fun(){
    
    static int x = 5 ; 
    cout<< " x : "<< x <<endl ; 
    x++ ; 

}



int main () {

    fun() ; 
    fun() ; 
    fun() ; 

    return 0 ; 
}