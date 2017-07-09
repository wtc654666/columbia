#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
//so struct seems to create a variant/archtype with certain characteristics. In this case, all types known as Person will have a name, age, height, and weight.
struct Person {
char * name;
int age;
int height;
int weight;
};

//the variables inside the () are going to be the strings and numbers you want to set for the characteristics
struct Person *Person_create(char *name, int age, int height, int weight){

//it would appear that "who" is given same characteristics as those labelled as "Person". malloc gives rough memory of something
struct Person *who = malloc(sizeof(struct Person));
assert(who != NULL);

who->name = strdup(name);
who->age = age;
who->height = height;
who->weight = weight;

return who;
}

//this is presumably the function intended to "delete"/"erase" the variables/objects labelled as "person"
void Person_destroy(struct Person *who)
{
assert(who != NULL);
//deletes memory of this
free(who->name);
free(who);
}

//the function just prints out all characteristics of the object
void Person_print (struct Person *who)
{
printf("Name: %s\n", who->name);
printf("Age: %d\n", who->age);
printf("Height: %d\n", who->height);
printf("Weight: %d\n", who->weight);
}


int main(int argc, char *argv[])
{
//make two human structures
struct Person*joe = Person_create("Joe Alex", 32, 53, 140);
struct Person *frank = Person_create("Frank Blank", 20, 72, 100);

//print them out and where they are in memory
printf("Joe is at memory location: %p:\n", joe);
Person_print(joe);

printf("Frank is at memory location: %p:\n", frank);
Person_print(frank);

//and then destroy them all
Person_destroy(joe);
Person_destroy(frank);

}

