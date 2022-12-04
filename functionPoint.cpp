#include<stdio.h>
int add(int x, int y){
      return x + y;
}
int subtract(int x, int y){
      return x - y;
}
int multiply(int x, int y){
      return x * y;
}
int divide(int x, int y){
      return x / y;
}
struct Point{
  int x;
  int y;
  int (*lpfun)(int,int);
};
typedef struct Point Point;

int main() {
    Point p1;
    p1.x = 1;
    p1.y = 3;
    p1.lpfun = add;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    printf("x+y = %d \n",p1.lpfun(p1.x,p1.y));
    p1.lpfun = subtract;
    printf("x-y = %d \n",p1.lpfun(p1.x,p1.y));
    p1.lpfun = multiply;
    printf("x*y = %d \n",p1.lpfun(p1.x,p1.y));
    p1.lpfun = divide;
    printf("x/y = %d \n",p1.lpfun(p1.x,p1.y));
    return 0;
}
