#include <stdio.h>

int main(int argc, char *argv[])
{
int max = atoi(argv[1]);
int max2 = atoi(argv[1]);
int min = atoi(argv[1]);
int sum;
int n = 0;
int e = 0;
int o = 0;
int array[argc - 1];

for (int i = 1; i < argc; i++){
sum += atoi(argv[i]);
if (atoi(argv[i]) < 0)
{printf("%s\n", argv[i]);
n ++;}
if (max < atoi(argv[i])){
max2 = max;
max = atoi(argv[i]);}
if (min > atoi(argv[i])){min = atoi(argv[i]);}

if (atoi(argv[i])%2 == 0){
e ++;}
else{o ++;}

array[i - 1] = atoi(argv[i]);


}

printf("Those numbers above are negative, adding up to a total of %d negative numbers.\n", n);
printf("The sum of all the numbers is %d.\n", sum);
printf("The maximum number is %d wheras the minimum is %d.\n", max, min);
printf("Oh and btw, the second largest number is %d.\n", max2);
printf("There are %d and %d even and odd numbers respectively.\n", e, o);

printf("To review, your selection of numbers are the following: ");

for (int i = 0; i < argc - 2; i ++){
printf("%d, ", array[i]);
}
printf("and %d.\n", array[argc - 2]);

int dup = 0;
int size = argc - 1;

for (int i = 0; i < size - dup; i ++){

for (int a = 0; a < i; a++){
if (array[a] == array[i]){

for (int b = i; b < size - dup - 1; b++){
array[b] = array[b+1];}


dup ++;}


}

}

printf("There are %d duplicates.\n", dup);
printf("After deleting the duplicates, your selection of numbers would look like this: \n");
for (int i = 0; i < size - dup - 1; i ++){
printf("%d, ", array[i]);}
printf("and %d.\n", array[size - dup - 1]);

return 0;
}
