#include <stdio.h>

int main(int argc, char *argv[]){
int a = atoi(argv[1]);
int b = atoi(argv[2]);

int *x;
int *y;
x = &a;
y = &b;

int max = *x;

if (*y > max){max = *y;}

printf("The bigger number is %d.\n", max);

return 0;
}
