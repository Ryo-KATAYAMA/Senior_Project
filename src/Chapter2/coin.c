#include<stdio.h>

#include<stdlib.h>

int main(){

  int n;

  double x,y;

  for(n=1;n<=1000;n++){ //nは試行回数

    x=rand()%2; //乱数を２で割った余りをxに入れることで、0or1の乱数を作っている

    if(x==0){ //コインが表(裏)の場合カウント

      y++;

    }

    if(n%5==0){ //5回試行するごとに記録

      printf("%d, %f\n",n,y/n); //x軸が試行回数、y軸がそれまでカウントした回数/試行回数

    }

  }

  return 0;

}