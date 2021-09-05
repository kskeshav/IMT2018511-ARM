#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct Queue{
  int items[MAX];
  int front;
  int rear;
};
typedef struct Queue queue;

void create(queue *q) {
	q->front = -1;
  q->rear = -1;
}

int isFull(queue *q) {
	if ((q->front == q->rear + 1) || (q->front == 0 && q->rear == MAX - 1))
		return 1;
	return 0;
}

int isEmpty(queue *q) {
	if (q->front == -1)
		return 1;
	return 0;
}

void push(queue *q, int newitem) {
  if (isFull(q)) {
    printf("Queue is already full!\n");
  } 
  else{
    if (q->front == -1) 
      q->front = 0;
    q->rear = (q->rear + 1) % MAX;
    q->items[q->rear] = newitem;
  }
}

void pop(queue *q) {
	if (isEmpty(q)) {
		printf("Queue is Empty!\n");
	} 
	else{
		printf("Item popped = %d\n", q->items[q->front]);
    if (q->front == q->rear) {
      q->front = -1;
      q->rear = -1;
    }
    else{
      q->front = (q->front + 1) % MAX;
    }
	}
}

void printQueue(queue *q) {
  if (isEmpty(q)) {
    printf("Queue is Empty!\n");
    return;
  }
  int i;
  for (i = q->front; i != q->rear; i = (i + 1) % MAX) {
    printf("%d ", q->items[i]);
  }
  printf("%d ", q->items[i]);
  printf("\n");
}

int main() {

  queue *q = (queue *)malloc(sizeof(queue));

  create(q);
  printQueue(q);
  push(q,1);
  push(q,2);
  push(q,3);
  push(q,4);
  printQueue(q);
  pop(q);
  pop(q);
  pop(q);
  pop(q);
  pop(q);
  printQueue(q);
}