#include <stdio.h>
// Recursion function
void fun(int n)
{
	if (n>0) {
		printf("%d ",n);
		// Last statement in the function
		fun(n-1);
		printf("%d, ",n);
	}
}
// Driver Code
int main(){
	int x = 5;
	fun(x);
	return 0;
}
