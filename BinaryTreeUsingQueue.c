#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *LChild;
    int data;
    struct Node *RChild;
};

struct Queue {
    int size;
    int front, rear;
    struct Node **Q;
};

void createQueue(struct Queue *q, int size) {
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
}

void enqueue(struct Queue *q, struct Node *x) {
    if (q->rear == q->size - 1)
        printf("Queue Overflow");
    else {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

struct Node *dequeue(struct Queue *q) {
    struct Node *x = NULL;
    if (q->front == q->rear)
        printf("Queue Underflow");
    else {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q) {
    return q.front == q.rear;
}

struct Node *root = NULL;

void createTree() {
    struct Node *p, *t;
    int x;
    struct Queue q;
    createQueue(&q, 50);
    printf("Enter root node: ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->LChild = root->RChild = NULL;
    enqueue(&q, root);
    while (!isEmpty(q)) {
        p = dequeue(&q);
        printf("Enter LChild node for %d: ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->LChild = t->RChild = NULL;
            p->LChild = t;
            enqueue(&q, t);
        }
        printf("Enter RChild node for %d: ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->LChild = t->RChild = NULL;
            p->RChild = t;
            enqueue(&q, t);
        }
    }
}

void preorder(struct Node *p) {
    if (p != NULL) {
        printf("%d ", p->data);
        preorder(p->LChild);
        preorder(p->RChild);
    }
}
void inorder(struct Node *p) {
    if (p != NULL) {
        inorder(p->LChild);
        printf("%d ", p->data);
        inorder(p->RChild);
    }
}
void postorder(struct Node *p) {
    if (p != NULL) {
        postorder(p->LChild);
        postorder(p->RChild);
        printf("%d ", p->data);
	}
}

void freeTree(struct Node *p) {//code to free tree memory
    if (p != NULL) {
        freeTree(p->LChild);
        freeTree(p->RChild);
        free(p);
    }
}

int main() {
    createTree();
    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");
    printf("Inorder Traversal: ");
	inorder(root);
    printf("\n");
	printf("Postorder Traversal: ");
	postorder(root);

    // Free allocated memory for the tree nodes
    freeTree(root);

    return 0;
}

