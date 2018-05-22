#include<stdio.h>

#include<stdlib.h>

int main(){

    int i,x,y=0;

    double z=0;

    for(i=0;i<1000000;i++){

        x=rand()%6+1; //EXAMPLE3bと同様、1～6の乱数を生成。大数の法則より1～6がほぼ同確率で出ることが確認されている。
        y=rand()%6+1;

        if(x+y==7){

            z++;

        }

    }

    printf("%lf",z/1000000);

}

//結果　0.166255