#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int new_data){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}
typedef struct Queue {
    Node *front, *rear;
} Queue;

Queue* createQueue(){
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}
int isEmpty(Queue* q){
    if (q->front == NULL && q->rear == NULL) {
        return 1;
    }
    return 0;
}

void enqueue(Queue* q, int new_data){

    Node* new_node = createNode(new_data);
    if (q->rear == NULL) {
        q->front = q->rear = new_node;
        return;
    }
    q->rear->next = new_node;
    q->rear = new_node;
}

void dequeue(Queue* q){

    if (isEmpty(q)) {
        return;
    }
    Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
}
int getFront(Queue* q){
    if (isEmpty(q)) {
        return INT_MIN;
    }
    return q->front->data;
}

int getRear(Queue* q){
    if (isEmpty(q)) {
        return INT_MIN;
    }
    return q->rear->data;
}
int main(){
    Queue* q = createQueue();
    int n;
    while(scanf("%d\n",&n)!=0){
      if(n==0) break;
      for(int i=1;i<=n;i++) enqueue(q,i);
      printf("Discarded cards: ");
      int first=1, t=0,i=1;
      while (t<n-1){
            if (!first) printf(", ");
            else first = 0;
            printf("%d", getFront(q));
            dequeue(q);
            enqueue(q,getFront(q));
            dequeue(q);
            t++;
        }
       printf("\nRemaining card: %d\n",getRear(q));
       if(!isEmpty(q)) dequeue(q);

    }
    return 0;
}