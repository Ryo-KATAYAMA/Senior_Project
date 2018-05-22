#include<stdio.h>

#include<math.h>

int kaijou();

int permutation();

int combination();

int main(){

    int x=52;

    int y=5;

    double z=0;

    z=10*(pow(4,5)-4)/combination(x,y); //累乗はpow関数を用いて表す

    printf("%lf",z);

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



//　結果　0.003925