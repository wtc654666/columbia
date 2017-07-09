#include <stdio.h>

int count(int box[], int boxsize, int find)
{int count = 0;
for (int i = 0; i < boxsize; i++)
{if (box[i] == find)
{count ++;
printf("%d appears at position %d!\n", find, i);}
}

return count;
}

int note(int box[], int boxsize)
{printf("To review, the list is comprised of these elements: ");
for (int i = 0; i < boxsize - 1; i ++)
{printf("%d, ", box[i]);}
printf("and %d.\n", box[boxsize - 1]);
}



int main (int argc, char*argv[])
{
int size = argc - 1;
int list[size];

for (int i = 0; i < size; i++)
{list[i] = atoi(argv[i + 1]);}

int num;

printf("What number? ");
scanf("%d", &num);

int repeat;
repeat = count(list, size, num);

printf("The element %d appears in the list %d times.\n", num, repeat);

note(list, size);

return 0;
}
