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
	printf("\n");
}

int print_data_cal_sum(int* a, int n){
	int i, sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}
int main(){
	int n =5;
	int a[n],i;
	input_data(a,n);
	print_data(a,n);
	printf("sum = %d \n", print_data_cal_sum(a,n));
	return 0;
}
