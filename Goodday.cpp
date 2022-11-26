#include <stdio.h>

int main(){
int time = 22;
if (time < 10) {
  printf("Good morning. \n");
} else if (time < 20) {
  printf("Good day. \n");
} else {
  printf("Good evening. \n");
}
// Outputs "Good evening."
//
(time < 18) ? printf("Good day. \n") : printf("Good evening. \n");
return 0;
}
