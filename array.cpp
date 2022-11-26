#include <stdio.h>
void input_data(int* a, int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void print_data(int* a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n =5;
	int a[n],i;
	input_data(a,n);
	print_data(a,n);
	printf("\n");
}
