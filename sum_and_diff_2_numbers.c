// https://www.hackerrank.com/challenges/sum-numbers-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int nr1,nr2;
    scanf("%d %d",&nr1,&nr2);
    printf("%d %d\n",nr1+nr2,nr1-nr2);
    float fnr1,fnr2;
    scanf("%f %f",&fnr1,&fnr2);
    printf("%.1f %.1f",fnr1+fnr2,fnr1-fnr2);

    return 0;
}