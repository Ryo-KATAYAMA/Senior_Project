#include<stdio.h>

int kaijou();

int permutation();

int combination(); //関数のプロトタイプ宣言

int main(){

    int x=10;

    int y=2;

    int z=0;

    z=combination(x,y);

    printf("%d",z);

}




int kaijou(int x){

    int y=x;

    while(x>2){

        x-=1;

        y*=x;

    }

    return y;

}



int permutation(int x,int y){

    int z=x;

    while(y>1){

        x-=1;

        z*=x;

        y-=1;

    }

    return z;

}






int combination(int x,int y){

    return permutation(x,y)/kaijou(y);

}


//　結果　45
//kaijou(x)、permutation(x,y)、combination(x,y)でそれぞれx!、xPy、xCyを関数として用いることが可能。