#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Queue{
int MAX_SIZE;
int face;
int back;
int queue[];

};


struct Queue *Queue_create(int MAX_SIZE){

struct Queue *id = malloc(sizeof(struct Queue));
assert(id != NULL);

id->MAX_SIZE = MAX_SIZE;
id->face = 0;
id->back = -1;
id->queue[id->MAX_SIZE];
}



int isEmpty(struct Queue *id){
if (id->back == -1){return 1;}
else{return 0;}

}

int isFull(struct Queue *id){
if (id->back >= id->MAX_SIZE - 1){return 1;}
else{return 0;}

}

int dequeue(struct Queue *id){
int data;

if (!isEmpty(id)){
data = id->queue[id->back];
id->back = id->back - 1;
return data;}
else{printf("The queue is empty. No elements are in it.\n");}

}

int enqueue(struct Queue *id, int data){
if(!isFull(id)){
id->back = id->back + 1;
id->queue[id->back] = data;}
else{printf("Queue is full. Sorry bro.\n");}
}

int rear(struct Queue *id){return id->queue[id->back];}

int front(struct Queue *id){return id->queue[id->face];}


int main(int argc, char * argv[]){

struct Queue *a = Queue_create(8);
enqueue(a, 8);
enqueue(a, 9);
enqueue(a, 10);

printf("The rear of the queue is %d\n", rear(a));
printf("The front of the queue is %d\n", front(a));

dequeue(a);

printf("After using 'dequeue', the new rear of the queue is %d\n", rear(a));


return 0;}
