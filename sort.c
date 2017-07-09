#include <stdio.h>


int note(int box[], int boxsize)
{printf("To review, the list is currently comprised of these elements: ");
for (int i = 0; i < boxsize - 1; i ++)
{printf("%d, ", box[i]);}
printf("and %d.\n", box[boxsize - 1]);
}


int swap(int list[], int a, int b)
{int placeholder = list[b];
list[b] = list[a];
list[a] = placeholder;}


int append(int list[], int position, int end)
{int placeholder = list[end];
for (int i = end; i > position; i--){list[i] = list[i - 1];}
list[position] = placeholder;
}


int bubblesort(int list[], int size)
{
for (int b = 1; b < size; b++){
for (int a = 0; a < size - b; a++)
{if (list[a] > list[a + 1]){swap(list, a, a+1);}

}}

}


int selectionsort(int list[], int size)
{int spot;
for (int b = 0; b < size; b++){
spot = b;
for (int a = b; a < size; a++){
if (list[a] < list[spot]){spot = a;}}
swap(list, b, spot);
}

}


int insertionsort(int box[], int size)
{
for (int b = 1; b < size; b++){
for (int a = b - 1; a >= 0; a--){
if (box[a] < box[b] && box[b] < box[a+1]){append(box, a + 1, b);}
else if (box[b] < box[a] && a == 0){append(box, a, b);}
}
}

}



int main(int argc, char* argv[])
{
int num = argc - 1;
int boxy[num];


for (int i = 0; i < num; i++)
{boxy[i] = atoi(argv[i + 1]);}

note(boxy, num);

insertionsort(boxy, num);
printf("Bzzt, insertion sort being performed...\n");

note(boxy, num);



return 0;}
