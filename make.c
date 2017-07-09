#include <stdio.h>

int main(int argc, char*argv[])
{
int numbers[4] = {0};
char name[4] = {'Z'};

printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
printf("Name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);
printf("Name: %s\n", name);

numbers[0] = 1;
numbers[1] = 2;
numbers[2] = 3;
numbers[3] = 4;

name[0] = 'B';
name[1] = 'o';
name[2] = 'b';
name[3] = 'W';
name[4] = 'Z';

printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

printf("name %s\n", name);

char*another = "BobW";

printf("Another: %s\n", another);

printf("Another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

return 0;
}
