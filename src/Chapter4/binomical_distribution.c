#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double Uniform();
int main(){
  int l,m,n=0;
  double a,b,c,d,e,f,g,h,i,j=0;
  double x=0.0;
  srand((unsigned)time(NULL));
  for(l=0;l<1000;l++){
    for(m=0;m<1000;m++){
      x=Uniform();
      if(x<=0.003){
	n++;
      }
    }
    if(n==0){
    a++;
    }
    if(n==1){
      b++;
    }
    if(n==2){
      c++;
    }
    if(n==3){
      d++;
    }
    if(n==4){
      e++;
    }
    if(n==5){
      f++;
    }
    if(n==6){
      g++;
    }
    if(n==7){
      h++;
    }
    if(n==8){
      i++;
    }
    if(n==9){
      j++;
    }//nがいくつなのかで分類、10以上の確率はほぼ0なので考えないこととする
      n=0;
  }
  printf("0, %f\n1, %f\n2, %f\n3, %f\n4, %f\n5, %f\n6, %f\n7, %f\n8, %f\n9, %f\n",a/1000,b/1000,c/1000,d/1000,e/1000,f/1000,g/1000,h/1000,i/1000,j/1000);
//x軸が成功数、y軸が確率のpltデータになる
}

double Uniform(){ //一様乱数の生成
  return ((double)rand()+1.0)/((double)RAND_MAX+2.0);
}
/*成功率0.003、試行回数1000回のヒストグラム。
 * pが十分小さくnが大きい時、二項分布とポアソン分布は近似できる。*/
