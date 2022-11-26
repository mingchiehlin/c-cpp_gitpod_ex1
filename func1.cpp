# include <iostream>
using namespace std;
int fun1(int a, int b){
	return a+b;
}
int main(){
	int aa = 30, bb = 60, res;
	res = fun1(aa,bb);
	printf("aa=%d, bb=%d, aa + bb = %d. \n", aa, bb, res);
	return 0;
}
