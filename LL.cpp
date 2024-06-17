//LL in C++
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class Linkedlist
{
private:
    Node* first;

public:
    Linkedlist() { first = NULL; } // Default Constructor
    Linkedlist(int A[], int n);   // Parameterized Constructor
    ~Linkedlist();                // Destructor

    // Functions
    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
};

// Create LL
Linkedlist::Linkedlist(int A[], int n)
{
    Node* last, * t;
    int i = 0;
    first = new Node;  // Creating first Node in a LL
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)  // Creating other Nodes
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

Linkedlist::~Linkedlist() // Deleting/Destructor Function
{
    Node* p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void Linkedlist::Display() // Display LL
{
    Node* p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Linkedlist::Length() // Length of LL
{
    Node* p = first;
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Linkedlist::Insert(int index, int x)
{
    if (index < 0 || index > Length()) // Condition check if insertion is possible
        return;

    Node* t = new Node; // New node creation to insert val in it
    t->data = x;
    t->next = NULL;

    // If data to be inserted in the first Node
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        Node* p = first;
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

// Deleting a Node from LL
int Linkedlist::Delete(int index)
{
    if (index < 1 || index > Length())
        return -1;

    Node* p = first;
    int x = -1;
    // If deleting the first Node
    if (index == 1)
    {
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        Node* q = NULL; // Tail pointer q to p
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

int main()
{
    int A[] = { 1, 2, 3, 4, 5 };
    Linkedlist l(A, 5); // LL declaration
    cout << "Deleted Ele: " << l.Delete(3) << endl;
    cout << "Length of LL: " << l.Length() << endl;
    l.Insert(3, 6);
    l.Display();

    return 0;
}

