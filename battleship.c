#include <stdio.h>

int randomize(int limit)
{srand(time(NULL));
int num = rand() % (limit + 1);
while (num <= 0)
{num = rand() % (limit + 1);}
return num;

}

int try(int list[], int size)
{printf("Which ship #(1-%d) will you kill now? ", size);
int guess;
scanf("%d", &guess);

list[guess - 1] = 0;
printf("RIP ship #%d I guess...\n", guess);

}

int aitry(int list[], int size)
{int guess = randomize(size);
while (list[guess - 1] == 0)
{guess = randomize(size);}

list[guess - 1] = 0;

printf("Looks like your foe has chosen to sink its enemy ship #%d!\n", guess);
}




int main(int argc, char* argv[])
{
int choices = 9;

int player[choices];
int foe[choices];

for (int i = 0; i < choices; i++)
{player[i] = 1;
foe[i] = 1;
}

printf("So basically, you and your COM foe each have an enemy ship to shoot out of %d ships. Each of these ships will be labelled with a number from 1-%d and in each round, you guys will both get to choose which ship to shoot down. Whoever shoots down the right side wins!\n", choices, choices);

int answerp = randomize(choices);
int answerf = randomize(choices);

while (player[answerp - 1] != 0 && foe[answerf - 1] != 0)
{try(player, choices);
aitry(foe, choices);
}



if (player[answerp - 1] == 0 && foe[answerf - 1] == 0)
{printf("Looks like both of you have shot down the right ships at the same time. It's a tie!\n");}
else if (player[answerp - 1] == 0)
{printf("Yay! You've hit the right ship! Congrats, you won!\n");}
else if (foe[answerf - 1] == 0)
{printf("Looks like your foe shot down the right ship! You lost!\n");}




return 0;}
