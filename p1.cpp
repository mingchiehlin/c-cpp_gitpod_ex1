#include<iostream> 
using namespace std;
int main(void){
    int i,j,n=1000000000,m=1;
    double pow2[m];
    //long pow2= 1152921504606846976;
    for(i=0;i<m;i++){
        pow2[i]=1;
        //printf("%d ",pow2[i]);
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){            
            pow2[j] =  pow2[j] * 2.0;
            //pow2 =  pow2 / 2;
        }
    }
    for(i=0;i<m;i++){
        printf("2_pow %d = %f \n",n,pow2[i]);
    }
    
    return 0;
}