#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    double x;
    double y;
    int count = 0;
    int k;
    int i;
    double num;
    double hold;

    scanf("%d",&k);
    for(i=1;i<k;i++){
        printf("oyama\n");
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;
        hold = x*x+y*y;
        num = sqrt(hold);printf("%f\n",x);
        if(num <= 1)
        count++;
    }
    double bobo;
    bobo = (4*(double)count)/(double)k;

    printf("%f\n",bobo);
 
    return 0;
}
