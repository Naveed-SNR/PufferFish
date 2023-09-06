#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Queue 
{
    int data[MAX_SIZE];
    int front;
    int rear;
}Queue;

void enqueue(Queue* q, int value) 
{
    if (q->rear == MAX_SIZE - 1) {
        printf("Queue overflow\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->data[q->rear] = value;
    }
}

int dequeue(Queue* q) 
{
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue underflow\n");
        return -1;
    } else {
        int value = q->data[q->front];
        q->front++;
        return value;
    }
}

int isEmpty(Queue* q) 
{
    return (q->front == -1 || q->front > q->rear);
}

void push(Queue* q1, Queue* q2, int value) 
{
    if (isEmpty(q1) && isEmpty(q2))
    {
        enqueue(q1, value);
    } 
    else if (!isEmpty(q1))
    {
        enqueue(q1, value);
    } 
    else if (!isEmpty(q2))
    {
        enqueue(q2, value);
    }
}

int pop(Queue* q1, Queue* q2) 
{
    if (isEmpty(q1) && isEmpty(q2)) 
    {
        printf("Stack underflow\n");
        return -1;
    } 
    else if (!isEmpty(q1)) 
    {
        while (q1->front != q1->rear) 
        {
            enqueue(q2, dequeue(q1));
        }
        return dequeue(q1);
    } 
    else if (!isEmpty(q2))
    {
        while (q2->front != q2->rear) 
        {
            enqueue(q1, dequeue(q2));
        }
        return dequeue(q2);
    }
}

int peek(Queue* q1, Queue* q2) {
    if (isEmpty(q1) && isEmpty(q2)) {
        printf("Stack is empty\n");
        return -1;
    } else if (!isEmpty(q1)) {
        while (q1->front != q1->rear) {
            enqueue(q2, dequeue(q1));
        }
        int value = q1->data[q1->front];
        enqueue(q2, dequeue(q1));
        return value;
    } else if (!isEmpty(q2)) {
        while (q2->front != q2->rear) {
            enqueue(q1, dequeue(q2));
        }
        int value = q2->data[q2->front];
        enqueue(q1, dequeue(q2));
        return value;
    }
}

int main() {
    Queue q1 = { .front = -1, .rear = -1 };
    Queue q2 = { .front = -1, .rear = -1 };
    push(&q1, &q2, 10);
    push(&q1, &q2, 20);
    push(&q1, &q2, 30);
    
    printf("Top element is %d\n", peek(&q1, &q2));
    
    printf("Popped element is %d\n", pop(&q1, &q2));
    printf("Popped element is %d\n", pop(&q1, &q2));
    
    push(&q1, &q2, 40);
    
    printf("Top element is %d\n", peek(&q1, &q2));
    
    return 0;
}
