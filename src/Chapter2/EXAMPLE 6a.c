#include<stdio.h>

int main(){

    int i=1;

    double x=1;

    for(i=1;i<100000000;i++){

        x=x*9*i/(9*i+1);

    }

    printf("%lf",x);

}



//　結果　試行回数100回のとき0.567972

//  試行回数10000回のとき0.340323

//　試行回数1000000回のとき0.204018

//  試行回数100000000回のとき0.122305