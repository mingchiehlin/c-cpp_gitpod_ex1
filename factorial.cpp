#include <iostream>
using namespace std;
#if method
//Not Recursive n! = n * (n-1) * (n-2) * ... * 1
int multiplyNumbers(int n){
	int tmp=1;
	for (int i=n;i>=1;i--)
		tmp *= i;
	return tmp;
} 
#else
//Recursive f(n) = n*f(n-1) 
int multiplyNumbers(int n){
	if (n>=1)
	return n*multiplyNumbers(n-1);
	else
		return 1;
} 
#endif
int main(void){
int method = 1;
	if (method == 1) {
	printf("Not Recursive! \n");
	} else {
	printf("Recursive! \n");
	}
	printf("1! is: %d \n", multiplyNumbers(1));
	printf("2! is: %d \n", multiplyNumbers(2));
	printf("3! is: %d \n", multiplyNumbers(3));
	printf("4! is: %d \n", multiplyNumbers(4));
	printf("5! is: %d \n", multiplyNumbers(5));
	return 0;
}

