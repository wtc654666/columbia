#include <stdio.h>

int MAX_SIZE = 8;
int queue[8];
int bottom = 0;
int top = -1;

int isEmpty(){
if (top == -1){return 1;}
else{return 0;}

}

int isFull(){
if (top == MAX_SIZE){return 1;}
else{return 0;}

}

int dequeue(){
int data;

if (!isEmpty()){
data = queue[top];cd..
top = top - 1;
return data;}
else{printf("Queue is empty. No top element.\n");}

}

int enqueue(int data){
if(!isFull()){
top = top + 1;
queue[top] = data;}
else{printf("Queue is full. No can do. Sorry bro.\n");}
}

int rear(){
return queue[top];
}

int front(){return queue[bottom];}

int main(){
enqueue(3);
enqueue(2);
enqueue(6);
enqueue(10);
enqueue(1);

printf("Front of queue is currently %d.\n", front());
printf("Rear of queue is currently %d.\n", rear());
printf("Queue: \n");

while (!isEmpty()){
int data = dequeue();
printf("%d\n", data);}



}
