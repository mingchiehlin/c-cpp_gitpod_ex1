#include <stdio.h>
int main() {
    char s[] = "hello world ! Are you in Taiwan ? ";
    int i,length;
	length = sizeof(s)/sizeof(char);
    printf("Length of the string: %d \n", length); 
	for (i = 0; s[i] != '\0'; ++i);
	printf("Length of the string: %d \n", i);
    return 0;
}
