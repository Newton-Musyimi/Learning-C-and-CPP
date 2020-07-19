#include <stdio.h>
#include <stdlib.h>

int summation(int a, int b){
    int add = a + b;
    return add;
}
int main(void){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int num = summation(a,b);
    printf("the sum of %d and %d is %d\n", a, b, num);
    exit(0);
}