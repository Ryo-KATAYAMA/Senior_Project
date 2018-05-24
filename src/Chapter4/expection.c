#include<stdio.h>

#include<stdlib.h>

int main(){

  int a,b,c,i=0;

  double d=0.0;

  srand((unsigned)time(NULL));

  for(i=0;i<2000;i++){

    a=rand()%2;

    b=rand()%2;

    c=rand()%2;

    if(a==1){

      d++;

    }

    if(b==1){

      d++;

    }

    if(c==1){

      d++;

    }

    printf("%d  %lf\n",i,d/i);

  }

}

/*コインを3枚投げた結果の相加平均。x軸試行回数、y軸結果*/
