#include<stdio.h>
#include<stdlib.h>
double C();
double Hypergeometric();//(Nmni)
int main(){
	double a,b,c,d,e,f,g,h,i,j,k=0.0;
	a=Hypergeometric(1000,30,100,0);
	b=Hypergeometric(1000,30,100,1);
	c=Hypergeometric(1000,30,100,2);
	d=Hypergeometric(1000,30,100,3);
	e=Hypergeometric(1000,30,100,4);
	f=Hypergeometric(1000,30,100,5);
	g=Hypergeometric(1000,30,100,6);
	h=Hypergeometric(1000,30,100,7);
	i=Hypergeometric(1000,30,100,8);
	j=Hypergeometric(1000,30,100,9);
	k=Hypergeometric(1000,30,100,10);
	printf("0, %lf\n1, %lf\n2, %lf\n3, %lf\n4, %lf\n5, %lf\n6, %lf\n7, %lf\n8, %lf\n9, %lf\n10, %lf",a,b,c,d,e,f,g,h,i,j,k);
	}

double C(int a,int b){//aCb。計算途中で少数になる可能性を考えdouble型に
    double c=a;
    if(b==0){
		return 1;
	}
    else{
        while(b>1){
            a--;
            c*=a;
            c/=b;
            b--;
		}
		return c;
    }
}

double Hypergeometric(int N,int m,int n,int i){//合計N個のうち当たりm個、その中からn個取り出した時i個が当たりの確率
	return(C(m,i)*C((N-m),(n-i))/C(N,n));
}
/*状況的に矛盾した数字にしてもエラー吐かないので注意
今回はオーバーフローしたために合計1000個のうち30個(全体の0.03)を当たりとしている。
x軸当たった数、y軸その確率であり、11個以上の確率は極めて低かったため描写していない。*/
