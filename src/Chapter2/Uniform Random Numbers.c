#include <stdio.h>

#include <time.h>

#include <stdlib.h>

double Uniform();

int main()
{

    int i=0;

    double x=0.0;

    srand((unsigned)time(NULL));

    for(i=0;i<10;i++){

        x=Uniform();

        printf("%lf\n",x);

    }

    return 0;

}



double Uniform(){//ˆê—l—”¶¬ŠÖ”

    return ((double)rand()+1.0)/((double)RAND_MAX+2.0);

}