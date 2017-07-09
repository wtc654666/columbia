#include <stdio.h>

int main(int argc, char *argv[])
{
   char*array[argc - 1];
int sum;

   for (int i = 1; i < argc; i++)
   {sum += atoi(argv[i]);}
printf("The sum is %d.\n", sum);

   return 0;
}
