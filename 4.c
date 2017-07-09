#include <stdio.h>

int main(int argc, char *argv[])
{
int a = 5;
int b = 6;

int *x;
int *y;
x = &a;
y = &b;

printf("The sum of %d and %d is %d.\n", a, b, *x + *y);



}
