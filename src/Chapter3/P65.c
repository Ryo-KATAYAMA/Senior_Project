#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i,x=0;
    float npef,npf,c=0;
    srand((unsigned)time(NULL));//randŠÖ”‚Ì‰Šú’l‚ğ•ÏX
    for(i=0;i<100000;i++){
        x=rand()%6+1;
        if(x%6==0){
          npef++;
        }
        if(x%2==0){
          npf++;
        }
    }
    printf("%lf\n",npef);
    printf("%lf\n",npf);
    c=npef/npf;
    printf("%lf\n",c);
    return 0;
}}