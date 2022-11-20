// Python  input_num = 60 print( ' the factorial number of 60 =') for i in range (1,input_num,1): if (int(input_num) % i) == 0 : print (str(i) + ",")


#include <iostream>
using namespace std;
int main()
{
    int i, j;
    printf("Please input a number:");
    scanf("%d", &i);
    printf("The factor of %d :", i);	    
    for(j=1;j<i+1;j++){
	if (i%j==0){
	printf("%d,", j);
	}
   
    }
   
    cout<<"Facotr! \n";



    return 0;
}
