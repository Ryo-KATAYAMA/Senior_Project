#include<stdio.h>

#include<stdlib.h>

int main(){

    int i,x,y=0;

    double z=0;

    for(i=0;i<1000000;i++){

        x=rand()%6+1; //EXAMPLE3b�Ɠ��l�A1�`6�̗����𐶐��B�吔�̖@�����1�`6���قړ��m���ŏo�邱�Ƃ��m�F����Ă���B
        y=rand()%6+1;

        if(x+y==7){

            z++;

        }

    }

    printf("%lf",z/1000000);

}

//���ʁ@0.166255