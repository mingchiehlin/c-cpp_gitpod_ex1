#include <stdio.h>

int main() {
   const float PI = 3.14;
   double radius = 5.3, area = PI*radius*radius;
   float area1 = PI*radius*radius;
  //myNum = 10;
  //area = PI*myNum*myNum;
  printf("%2.16f \n", area1);
  printf("%2.16lf \n", area);
  return 0;
}
