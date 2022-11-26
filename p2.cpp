#include<iostream> 
using namespace std;
int main(void){
    int i,j,n=1000000000,m=1;
    double pow2=1.0;
    //long pow2= 1152921504606846976;
        for(i=0;i<n;i++){            
            pow2 =  pow2 * 2.0;
            //pow2 =  pow2 / 2;
        }
        printf("2_pow %d = %f \n",n,pow2);
    
    return 0;
}
