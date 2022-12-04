#include <iostream>  
using namespace std;  
template<class T1> 
T1 add(T1 &a,T1 &b)  {  
  T1 result = a+b;  
    return result;  
} 
template<class T2> T2 subtract(T2 &a,T2 &b) {
  T2 result = a-b;
    return result;
}
int main()  
{  
  int i =2;  
  int j =3;  
  float m = 2.3;  
  float n = 1.2;  
  cout<<"Addition of i and j is :"<<add(i,j) <<endl; 
  cout<<"Addition of m and n is :"<<add(m,n) <<endl;  
  cout<<"Addition of i and j is :"<<subtract(i,j) <<endl; 
  cout<<"Addition of m and n is :"<<subtract(m,n) <<endl;  
  return 0;  
}  
