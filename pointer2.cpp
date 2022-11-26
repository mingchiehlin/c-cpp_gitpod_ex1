#include<stdio.h>
int main()
{
    int  *i,ii; 
    int  c,a[3] = {1,2,3};
    ii = 3 ;
    #if 0 
    i = i;
    printf(" *i = %d \n", *i);
    printf( " &ii = %d \n",&ii);
    printf( " i = %d  \n", i);
    #endif 
    
    i = &ii;
    printf(" *i = %d \n", *i);
    printf( " &ii = %p \n",&ii);
    printf( " i = %p  \n", i);
    printf("The size of i is: %ld \n", sizeof(i));
    for(c=0;c<3;c++){
        printf("%12d ",a[c]);
    }
    printf("\n");

 

    for(c=0;c<3;c++){
        printf("%p ",&a[c]);
    }
    printf("\n");
    
    i = a;
    for(c=0;c<3;c++){
        printf("%12d ",i[c]);
    }
    printf("\n");
    printf("The size of i is: %ld \n", sizeof(i));
    for(c=0;c<3;c++){
        printf("%p ",i+c);
    }
    printf("\n");
 
    return 0;
}
