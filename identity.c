int main(int argc, char*argv[])
{
int areas[] = {10, 12, 13, 14, 20};
char name[] = "Bob";
char full_name[] = {'B', 'o', 'b', ' ', 'W', ' ', 'Z', 'h', 'a', 'n', 'g'};

printf("The size of an int is %ld\n", sizeof(int));
printf("The size of areas (int()) is %ld\n", sizeof(areas));

printf("The number of ints in areas is: %ld\n", sizeof(areas)/sizeof(int));
printf("The first int is %d while the second is %d\n", areas[0], areas[1]);

printf("The size of char is %ld\n", sizeof(char));
printf("The size of name (char()) is %ld\n", sizeof(name));

printf("The number of chars in name is %ld\n", sizeof(name)/sizeof(char));

printf("The size of the full_name (char()) is %ld\n", sizeof(full_name));
printf("The number of chars in full_name is %ld\n", sizeof(full_name)/sizeof(char));

printf("The first letter of the name is %c while the second is %c\n", name[0], name[1]);

printf("Well basically, my full name is %s.\n", full_name);



return 0;
}
