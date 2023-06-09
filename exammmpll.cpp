#include <iostream>
using namespace std;

#define QUEUE_SIZE 6

struct Queue {
    int front, rear;
    int items[QUEUE_SIZE];
};

void InitializeQueue(struct Queue* q) {
    q->front = q->rear = -1;
}

bool isFull(struct Queue* q) {
    return (q->front == 0 && q->rear == QUEUE_SIZE - 1) || (q->rear == (q->front - 1) % (QUEUE_SIZE - 1));
}

bool isEmpty(struct Queue* q) {
    return q->front == -1;
}

void insert(struct Queue* q, int value) {
    if (isFull(q)) {
        cout << "Queue is full. Cannot insert element.\n";
        return;
    }
    if (q->front == -1)
        q->front = q->rear = 0;
    else if (q->rear == QUEUE_SIZE - 1)
        q->rear = 0;
    else
        q->rear++;

    q->items[q->rear] = value;
}

int remove(struct Queue* q) {
    if (isEmpty(q)) {
        cout << "Queue is empty. Cannot remove element.\n";
        return -1;
    }

    int removedValue = q->items[q->front];
    if (q->front == q->rear)
        q->front = q->rear = -1;
    else if (q->front == QUEUE_SIZE - 1)
        q->front = 0;
    else
        q->front++;

    return removedValue;
}

int main() {
    struct Queue ql;
    InitializeQueue(&ql);
    int z;

    insert(&ql, 3);
    insert(&ql, 5);
    insert(&ql, 7);
    z = remove(&ql);
    insert(&ql, 9);
    z = remove(&ql);
    z = remove(&ql);
    insert(&ql, 11);
    insert(&ql, 11);
    insert(&ql, 13);
    z = remove(&ql);
    insert(&ql, 15);
    z = remove(&ql);
    insert(&ql, 17);

    cout << "front: " << ql.front << " - rear: " << ql.rear << endl;

    return 0;
}
