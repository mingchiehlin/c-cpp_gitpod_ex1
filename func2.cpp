# include <iostream>
using namespace std;
int fun1(int a, int b){
	return a+b;
}
void print_data(int a, int b){
	int res;
	res = fun1(a,b);
	printf("aa=%d, bb=%d, aa + bb = %d. \n", a, b, res);
}
int main(){
	int aa = 30, bb = 60, res;
	//res = fun1(aa,bb);
	//printf("aa=%d, bb=%d, aa + bb = %d. \n", aa, bb, res);
	print_data(aa,bb);
	return 0;
}
