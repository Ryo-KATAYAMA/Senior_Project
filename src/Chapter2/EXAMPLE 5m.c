#include<stdio.h>
#include<math.h>
double kaijou();
int permutation();
int combination();
int main(){
    int i=1;
    double x=1;
    for(i=1;i<13;i++){ //オーバーフローにより13の階乗以上は計算が正しく行われませんでした
     if(i%2==0){
         x+=1/(kaijou(i));
        }
        else{
            x-=1/(kaijou(i));
        }
    }
    printf("%lf e^(-1)との誤差は%lfです",x,x-exp(-1.0));
}

double kaijou(int x){
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

//結果　0.367879　e^(-1)との誤差は0.000000です