#include <stdio.h>

int main(int argc, char*argv[])
{int num;
printf("What number would you like to check? ");
scanf("%d", &num);
printf("The least significant bit of this number is ");
if ((num&1) != 1){printf("not ");}
printf("set.\n");

printf("The most significant bit (up to 32) of this number is ");
if (((num>>31)&1) != 1){printf("not ");}
printf("set.\n");


return 0;}


