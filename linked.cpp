#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* link;
}

Node* A;
A= NULL;    // EMPTY LIST
Node* temp = new Node();

temp->data = 2;
temp->link = NULL;
A = temp;

temp->data = 4;
temp->link = NULL;
A = temp;
