#include <stdio.h>

int call_by_reference(int *a, int *b){
int sum = 0;
sum = *a + *b;

return sum;}

int main(int argc, char *argv[])
{
//int a = 5;
//int b = 6;
int n1 = 5; 
int n2 = 6;
int *x, *y;

int sum;
sum = call_by_reference(&n1, &n2);


printf("The sum of %d and %d is %d.\n", n1, n2, sum);



}
