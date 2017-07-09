#include <stdio.h>

int main(int argc, char*argv[])
{
int ages[] = {23, 43, 12, 89, 2};
char *names[] = {"Bob", "wtc654666", "wtc6546x3", "Tomodachii", "player1"};

int count = sizeof(ages)/sizeof(int);

for (int i = 0; i < count; i++){
printf("%s has been alive for %d years.\n", names[i], ages[i]);}

printf("----------------\n");


int *cur_age = ages;
char **cur_name = names;

for (int i = 0; i < count; i++)
{printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i) );}

printf("----------------\n");

for (int i = 0; i < count; i++){
printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
}


}
