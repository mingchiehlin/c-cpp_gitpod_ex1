#include <iostream>
using namespace std;
float print_sum(int score[],int n){
    float f_ret;
    int   i,sum=0;
    for(i=0;i<n;i++){
        printf("%p ",&score[i]);
        sum += score[i];
    }
    f_ret = sum / n;
    return f_ret;
}

float add(int x, int y){
	float ret;
	printf("%p %p \n",&x,&y);
	ret = x+y;
	return ret;
}

int main(void){
	int n=5,i;
	int score[5];
	int u_c, temp = 0;
	float aver;
	printf("Please input 5 scores: \n");
	for (i=0;i<n;i++){
		scanf("%d",&score[i]);
		if (score[i]<60){
			u_c++;
		}
	}
	aver = print_sum(score,n);
	printf("\nScore average = %f \n", aver);
    temp = add(score[0], score[1]);
	printf("Two scores add = %d\n", temp);
	printf("%p %p \n",&score[0], &score[1]);
	if (u_c == 0){
		printf("All Pass! \n");
	}else{
		printf("You need to put more attentions, have %d courses failed\n",u_c);
	}
	return 0;
}