#include <iostream>

using namespace std;

int n, i;
struct node
{
    int data;
    node *next;
};

int main()
{
    node *head, *t, *travers;

    cin >> n;
    // create an element
    node *p = new node;
    cin >> p->data;
    // address gets written in head
    head = p;

    for (i = 0; i < n - 1; i++)
    {
        // same prev element in t
        t = p;
        // create new element
        p = new node;
        cin >> p->data;
        t->next = p;
        p->next = NULL;
    }

    travers = head;

    while (travers->next != NULL)
    {
        cout << travers->data << " ";
        travers = travers->next;
    }
    cout << travers->data << " ";
}