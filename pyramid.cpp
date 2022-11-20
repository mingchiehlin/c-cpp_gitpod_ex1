#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<10;i+=2){
	    for(j=1;j<i+1;j++){
        printf("*");
    }
	printf("\n");
    }	    
    cout<<"Pyramid! \n";

 

    return 0;
}
