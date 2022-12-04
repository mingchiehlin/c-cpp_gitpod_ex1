#include <stdio.h>
void print(int x, int i) {
	int t;
	//scanf("%d", &t)
	if (x==1){
		printf("%2d *%2d =%2d;", i, x, x*i);
	}else {
		print(x-1,i);
		printf("%2d *%2d =%2d;", i, x, x*i);
	}
}
int main(){
	int i;
	for (i=1;i<10;i++){
	print(9,i);
	printf("\n");
	}
	printf("\n Hello World!\n");
	return 0;
}
