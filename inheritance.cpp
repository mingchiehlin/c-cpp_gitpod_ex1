/*

C++ Single Level Inheritance Example: Inheriting Fields
When one class inherits another class,
it is known as single level inheritance.
Let's see the example of single level inheritance
which inherits the fields only.

*/
#include <iostream>
using namespace std;
class Account {
   public:
   float salary = 60000;
};


class Programmer: public Account {
   private:
   float bonus = 5000;
   public:
   float totalSalary = bonus+salary;
};


int main(void) {
     Programmer p1;
     cout<<"Salary: "<<p1.salary<<endl;
//     cout<<"Bonus: "<<p1.bonus<<endl;
     cout<<"Total Salary: "<<p1.totalSalary<<endl;
    return 0;
} 
