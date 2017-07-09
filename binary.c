#include <stdio.h>

int check(int box[], int boxsize, int number)
{int low = 0;
int high = boxsize - 1;
int mid = (low+high)/2;
while (box[mid] != number && high != low)
{if (number > box[mid])
{if (low == high - 1){low = (low+high+1)/2;}
else{low = mid;}
}
else if (number < box[mid])
{high = mid;}
mid = (low+high)/2;
}

if (box[mid] == number)
{printf("Yep, %d is among the list of elements and is found at position %d.\n", number, mid);}
else if (high == low)
{printf("The number %d cannot be found.\n", number);}


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

printf("What number would you like to check? ");
scanf("%d", &num);

check(list, size, num);

note(list, size);

return 0;
}
