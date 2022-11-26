#include <iostream>
using namespace std;
int main()
{
    int *i,c,a[3] = {1,2,3};
    for(c=0;c<3;c++){
        printf("%12d ",a[c]);
    }
    printf("\n");
    for(c=0;c<3;c++){
        printf("%p ",&a[c]);
    }
    printf("\n");
   
    i = a;// i = &a[0]
    for(c=0;c<3;c++){
        printf("%12d ",i[c]);
    }
    printf("\n");
    for(c=0;c<3;c++){
        printf("%p ",i+c);
    }
    printf("\n");
    for(c=0;c<3;c++){
        printf("%12d ",*(i+c));
    }
    printf("\n");
    return 0;
}
