#include <stdio.h>

int main(int argc, char *argv[]){

int list[argc - 1];

int i;

for (i = 0; i < argc - 1; i++)
{list[i] = atoi(argv[i + 1]);}

int *plist = list;

for (i = 0; i < argc - 1; i++)
{printf("Element %d: %d\n", i, plist[i]);}




return 0;
}
