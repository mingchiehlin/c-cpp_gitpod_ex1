#include <stdio.h>
#include <math.h>

int main ()
{
    int i_num=4;
    double f_num = 4.0, pow2 = 8.0;
    //(double)i_num;
    //f_num = sqrt(f_num);
    f_num = pow(pow2, i_num);
    printf("  %f \n",f_num);
    printf("Square root of %lf is %lf \n",4.0,sqrt(4.0));
    printf("Square root of %lf is %lf \n",5.0,sqrt(5.0));

    printf("%lfth Power of %lf is %lf \n", pow2, 4.0, f_num);
    return(0);
}
