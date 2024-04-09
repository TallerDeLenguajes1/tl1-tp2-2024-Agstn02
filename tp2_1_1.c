// codigo a completar
#include <stdlib.h>
#include <stdio.h>
#define N 20

void main(){
    // srand(time(NULL));
    int i;
    double vt[N];

    for(i = 0;i<N; i++)
    {
        vt[i]=  1 + rand()% 100;
        printf("%f\n", vt[i]);
    }
}