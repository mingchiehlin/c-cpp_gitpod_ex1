/*
C++ Single Level Inheritance Example: Inheriting Methods
Let's see another example of inheritance in C++ which inherits methods only.
*/

#include <iostream>
using namespace std;
class Animal {
   public:
        void eat() {
            cout<<"Eating..."<<endl;
        }
};

class Dog: public Animal {
    public:
        void bark(){
            cout<<"Barking..."<<endl;
        }
};

int main(void) {
    Dog d1;
    d1.eat();
    d1.bark();
    return 0;
} 
