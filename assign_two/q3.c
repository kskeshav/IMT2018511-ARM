#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void create(st *s) {
	s->top = -1;
}

int isFull(st *s) {
	if (s->top == MAX-1)
		return 1;
	return 0;
}

int isEmpty(st *s) {
	if (s->top == -1)
		return 1;
	return 0;
}

void push(st *s, int newitem) {
   if (isFull(s)) {
      printf("Stack is already full!\n");
   } 
   else{
      s->top++;
      s->items[s->top] = newitem;
   }
   count++;
}

void pop(st *s) {
	if (isEmpty(s)) {
		printf("Stack is Empty!\n");
	} 
	else{
		printf("Item popped = %d\n", s->items[s->top]);
      s->top--;
	}
	count--;
}

void printStack(st *s) {
   for (int i = 0; i < count; i++) {
      printf("%d ", s->items[i]);
   }
   printf("\n");
}

int main() {
   int ch;
   st *s = (st *)malloc(sizeof(st));

   create(s);

   push(s,1);
   push(s,2);
   push(s,3);
   push(s,4);
   printStack(s);
   pop(s);
   pop(s);
   pop(s);
   pop(s);
   pop(s);
   printStack(s);
}