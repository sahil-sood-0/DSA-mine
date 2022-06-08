// Iteratively reverse a linked list 
// DS-9
// Segmentation fault aara

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

};

struct Node* head; // Head is a pointer to node GLOBAL variable

struct Node* Reverse(struct Node* head)
{
    // Traverse the linked list
    struct Node  *prev, *current, *next; 
    // temp = head;// here we make temp point to the 2nd node
    
    current = head;
    prev= NULL;

    // while(temp != NULL)
    // {
    //     temp = temp->next; // Take temp to the next address in this loop
    //     temp->next = prev; // Read as temp.next=prev
    // }

    while(current != NULL)
    {
        next = current-> next;
        current-> next = prev; //*(current).next here we dereference
        prev = current;
        current = next;
    }

    head = prev;
    return head;

    // Now how to reverse the link???
    // We have to keep the track of the previous address

}

// Insert vala takes in 2 arguments
Node* Insert(Node* head, int data)
{
    Node* temp =(Node*)malloc(sizeof(struct Node));
    temp-> data = data;
    temp-> next = NULL;
    if(head != NULL) head = temp;

    // for 2 arguments
    else{
        Node* temp1 = head;
        while(temp-> next != NULL) temp1 = temp1->next;
        temp1-> next = temp;

    }
    return head;
};

// Print vala takes in 1 argument
void Print(Node* head)
{
    // struct Node* temp = head;
    cout<< "List is : ";
    while(head != NULL)
    {
        cout<< head->data<<" ";
        head = head->next;
    }

    cout<<"\n";

}

int main()
{
    struct Node* head = NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);
    // Print (head);

    // head= Reverse(head);
    Print (head);

}