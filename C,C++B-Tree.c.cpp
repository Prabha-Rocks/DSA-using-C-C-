#include <iostream>
using namespace std;

class Node {
public:
    Node* RChild;
    Node* LChild;
    int data;
};

class Queue {
private:
    int front, rear;
    int size;
    Node** Q;

public:
    Queue(int size = 10) {
        front = rear = -1;
        this->size = size;
        Q = new Node*[this->size];
    }

    void enqueue(Node* x) {
        if (rear == size - 1)
            cout << "Queue Overflow" << endl;
        else {
            rear++;
            Q[rear] = x;
        }
    }

    Node* dequeue() {
        Node* x = 0;
        if (front == rear)
            cout << "Queue Underflow" << endl;
        else {
            front++;
            x = Q[front];
        }
        return x;
    }

    bool isEmpty() {
        return front == rear;
    }

    void Display() {
        for (int i = front + 1; i <= rear; i++)
            cout << Q[i]->data << " ";
        cout << endl;
    }
};

class Tree {
public:
    Node* root;
    Tree() { root = 0; }
    void createTree();
    void preorder(Node* p);
    void inorder(Node* p);
    void postorder(Node* p);
    int height(Node* root);
};

void Tree::createTree() {
    Node *p, *t;
    int x;
    Queue q;
    cout << "Enter root node: ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->LChild = root->RChild = 0;
    q.enqueue(root);
    while (!q.isEmpty()) {
        p = q.dequeue();
        cout << "Enter LChild node for " << p->data << ": ";
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->LChild = t->RChild = 0;
            p->LChild = t;
            q.enqueue(t);
        }
        cout << "Enter RChild node for " << p->data << ": ";
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->LChild = t->RChild = 0;
            p->RChild = t;
            q.enqueue(t);
        }
    }
}

void Tree::preorder(Node* p) {
    if (p != 0) {
        cout << p->data << " ";
        preorder(p->LChild);
        preorder(p->RChild);
    }
}

void Tree::inorder(Node* p) {
    if (p != 0) {
        inorder(p->LChild);
        cout << p->data << " ";
        inorder(p->RChild);
    }
}

void Tree::postorder(Node* p) {
    if (p != 0) {
        postorder(p->LChild);
        postorder(p->RChild);
        cout << p->data << " ";
    }
}

int Tree::height(Node* root) {
    if (root == 0)
        return 0;
    int x = height(root->LChild);
    int y = height(root->RChild);
    return (x > y) ? x + 1 : y + 1;
}

int main() {
    Tree t;
    t.createTree();

    cout << "Preorder Traversal: ";
    t.preorder(t.root);
    cout << endl;

    cout << "Inorder Traversal: ";
    t.inorder(t.root);
    cout << endl;

    cout << "Postorder Traversal: ";
    t.postorder(t.root);
    cout << endl;

    cout << "Tree Height: " << t.height(t.root) << endl;

    return 0;
}

