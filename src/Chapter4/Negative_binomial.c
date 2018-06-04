#include<stdio.h>
#include"MT.h"
int main(){
	int l,m,n=0;//for,whileのカウント用
	double a,b,c,d,e,f,g,h,i,j,x=0;
    for(l=0;l<10000;l++){//10000回施行
		m=0;
		n=0;//2つの変数って同時に0にできない・・・？教えてエロい人
		init_genrand(l);
		while(m<5){//5回成功するまで
			m++;
			do{
				n++;
				x=genrand_real3();
			}while(x>0.3);//成功率0.3。この形にすることで必ず一回は操作が行われるため、xの値が前回の値を受け継がなくなる
		}
		if(n<5){
    	  a++;
        }
        else if(n<10){
	      b++;
        }
        else if(n<15){
	      c++;
        }
        else if(n<20){
	      d++;
        }
        else if(n<25){
	      e++;
        }
	    else if(n<30){
		  f++;
        }
  	    else if(n<35){
	  	  g++;
        }
        else if(n<40){
	  	  h++;
	    }
        else if(n<45){
	  	  i++;
	    }
        else if(n<50){
	   	  j++;
        }
	}
    printf("5, %lf\n10, %lf\n15, %lf\n20, %lf\n25, %lf\n30, %lf\n35, %lf\n40, %lf\n45, %lf\n50, %lf",a/10000,b/10000,c/10000,d/10000,e/10000,f/10000,g/10000,h/10000,i/10000,j/10000);
    return 0;
}
