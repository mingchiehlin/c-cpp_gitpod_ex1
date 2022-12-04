#include <iostream>    
using namespace std;    
class Animal {    
    public:    
    void eat(){      
      cout<<"Eating..."<<endl;      
    }        
};     
class Dog: public Animal      
{      
    int x;	
    public:
    Dog(int n){
    x=n;
    printf("%d dogs! \n", x);
    }	    
    void eat()  {           
        cout<<"Eating bread..."<<endl;      
    }      
};    
int main(void) {    
   Dog d = Dog(7);      
   d.eat();    
   return 0;    
}    
