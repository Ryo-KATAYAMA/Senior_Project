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
    for(m=0;m<100;m++){
      x=Uniform();
      if(x<=0.3){
	n++;
      }
    }
    if(n<10){
    a++;
    }
    if(10<=n && n<20){
      b++;
    }
    if(20<=n && n<30){
      c++;
    }
    if(30<=n && n<40){
      d++;
    }
    if(40<=n && n<50){
      e++;
    }
    if(50<=n && n<60){
      f++;
    }
    if(60<=n && n<70){
      g++;
    }
    if(70<=n && n<80){
      h++;
    }
    if(80<=n && n<90){
      i++;
    }
    if(90<=n){
      j++;
    }//nがいくつなのかで分類
      n=0;
  }
  printf("0, %f\n10, %f\n20, %f\n30, %f\n40, %f\n50, %f\n60, %f\n70, %f\n80, %f\n90, %f\n",a/1000,b/1000,c/1000,d/1000,e/1000,f/1000,g/1000,h/1000,i/1000,j/1000);
//x軸が成功数、y軸が確率のpltデータを作る
}

double Uniform(){ //一様乱数の生成
  return ((double)rand()+1.0)/((double)RAND_MAX+2.0);
}
