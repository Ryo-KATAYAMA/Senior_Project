#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double kaijou(double);
int main(){
	srand((unsigned)time(NULL));
	double ramuda=3.0;
	double k,x,y=0.0;
	for(k=0;k<10;k++){
		x=pow(ramuda,k)*exp(-ramuda)/kaijou(k);
		printf("%lf   %lf\n",k,x);
	}
}

double kaijou(double a){ //階乗
	double b=1.0;
	while(1<a){
		b*=a;
		a-=1;
	}
	return b;
}

/*平均値3のポアソン分布
 * x軸発生回数,y軸確率*/
