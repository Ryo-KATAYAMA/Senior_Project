#include <stdio.h>
int main(){
    int i,j,k;
    double kakuritu=0.166666666;//�T�C�R���̖ڂ͑S��1/6�̊m���ŏo��
    double E,V,ave2=0.0;
    for(i=1;i<=6;i++){
        E+=i*kakuritu;    
    }
    for(j=1;j<i;j++){
        V+=kakuritu*(j-E)*(j-E);
    }
    for(k=1;k<i;k++){
        ave2+=k*k;
    }
    ave2/=6;//�Q��̕���
    printf("�T�C�R���̏o��ڂ̊��Ғl��%lf�A���U��%lf�ł��B\n�܂��AE[X^2]��%lf�Ȃ̂ŁAE[X^2]-��^2��%lf�ŁA���U�̐��l�ƈ�v���܂��B\n",E,V,ave2,ave2-(E*E));
}
/*�T�C�R���̏o��ڂ̊��Ғl��3.500000�A���U��2.916667�ł��B
�܂��AE[X^2]��15.166667�Ȃ̂ŁAE[X^2]-��^2��2.916667�ŁA���U�̐��l�ƈ�v���܂��B*/