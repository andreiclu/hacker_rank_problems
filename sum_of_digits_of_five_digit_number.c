// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n; ;
    scanf("%d", &n);
    int s=0;
    while(n){
        s += n%10;
        n /= 10;
    }
    printf("%d", s);


    return 0;

}
