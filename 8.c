#include <stdio.h>

int main(int argc, char *argv[]){

char *choices = argv[1];

printf("%s\n", choices);

for (int i = 0; i < sizeof(choices)/sizeof(char); i++){
printf("%c\n", choices[i]);}

return 0;
}
