#include <stdio.h>

int main(int argc, char*argv[])
{
int i = 0;


//for (i = 1; i < argc; i++)
//{printf("arg %d: %s\n", i, argv[i]);}


char*states[] = {"Sinnoh", "Kanto", "Unova"};

for (i = 1; i < 4; i++)
{printf("State %d: %s\n", i, states[i - 1]);}


return 0;
}
