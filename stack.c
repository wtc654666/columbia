#include <stdio.h>

int MAX_SIZE = 8;
int stack[8];
int top = -1;

int isEmpty(){
if (top == -1){return 1;}
else{return 0;}

}

int isFull(){
if (top == MAX_SIZE){return 1;}
else{return 0;}

}

int pop(){
int data;

if (!isEmpty()){
data = stack[top];
top = top - 1;
return data;}
else{printf("Stack is empty. No top element.\n");}

}

int push(int data){
if(!isFull()){
top = top + 1;
stack[top] = data;}
else{printf("Stack is full. No can do. Sorry bro.\n");}
}

int peek(){
return stack[top];
}

int main(){
push(3);
push(2);
push(6);
push(10);
push(1);

printf("Top of stack is currently %d.\n", peek());
printf("Stack: \n");

while (!isEmpty()){
int data = pop();
printf("%d\n", data);}



}
