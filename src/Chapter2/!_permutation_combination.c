#include<stdio.h>

int kaijou();

int permutation();

int combination(); //�֐��̃v���g�^�C�v�錾

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


//�@���ʁ@45
//kaijou(x)�Apermutation(x,y)�Acombination(x,y)�ł��ꂼ��x!�AxPy�AxCy���֐��Ƃ��ėp���邱�Ƃ��\�B