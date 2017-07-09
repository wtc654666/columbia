#include <stdio.h>

int main(int argc, char*argv[])
{
char*array[] = {"Hi brother,", "How's it going?", "I guess your program worked if you can see this rn."};

for (int i = 0; i < 3; i++)
{printf("%s\n", array[i]);}

return 0;
}
