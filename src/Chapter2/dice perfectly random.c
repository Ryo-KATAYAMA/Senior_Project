#include <stdio.h>

#include <time.h>

#include <stdlib.h>

int main()
{

    int i,x=0;

    srand((unsigned)time(NULL));//rand関数の初期値を変更

    for(i=0;i<10;i++){

        x=rand()%6+1;

        printf("%d\n",x);

    }

    return 0;

}