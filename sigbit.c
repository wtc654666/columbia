#include <stdio.h>

int main(int argc, char*argv[])
{int num;
printf("What number would you like to check? ");
scanf("%d", &num);

printf("The least significant bit of this number is ");
if (num%2 == 0){printf("not ");}
printf("set.\n");

for (int i = 1; i < 31; i++)
{num = num/2;}

printf("The most significant bit of this number is ");
if (num < 2){printf("not ");}
printf("set.\n");


return 0;}
