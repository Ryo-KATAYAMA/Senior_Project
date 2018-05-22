#include <stdio.h>
int main(){
    int i,j,k;
    double kakuritu=0.166666666;//サイコロの目は全て1/6の確率で出る
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
    ave2/=6;//２乗の平均
    printf("サイコロの出る目の期待値は%lf、分散は%lfです。\nまた、E[X^2]＝%lfなので、E[X^2]-μ^2＝%lfで、分散の数値と一致します。\n",E,V,ave2,ave2-(E*E));
}
/*サイコロの出る目の期待値は3.500000、分散は2.916667です。
また、E[X^2]＝15.166667なので、E[X^2]-μ^2＝2.916667で、分散の数値と一致します。*/