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
	return 1/(2.929*k);
}

//α=0 kを10までに制限 ζ(s)=2.92896825 P{X=k}=1/2.929 * k
