#include <iostream>
#include <string>
using namespace std;
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
int main() {
  MyClass myObj;  // Create an object of MyClass
  char*   c;
  int     i;
 
  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";
 
  // Print values
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString << endl;
  c = &myObj.myString[0];
  
  //printf("2:%S\n",myObj.myString);
  printf("\nfor print string: ");
  for(i=0;c[i]!='\0';i++){
      printf("%c",c[i]);
  }
  printf("\n");
  printf("string length = %d\n",i);
  cout << "myString size = " << myObj.myString.size()     << endl;
  cout << "myString length = " << myObj.myString.length() << endl;
  for(i=0;i < myObj.myString.size() ;i++){
      printf("%c",myObj.myString[i]);
  }
  printf("\n");
  
  return 0;
}
