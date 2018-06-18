#include<stdio.h>
#include<math.h>
#define pi 3.14159
double Z(int);
int main(){
	int i;
	for(i=1;i<=10;i++){
		printf("%d  %lf\n",i,Z(i));
	}
}
double Z(int k){
	return 6/(pow(pi,2)*pow(k,2));
}

//α=1 ζ(s)=pi^2/6(バーゼル問題) P{X=k}=6/pi^2 * k^2
