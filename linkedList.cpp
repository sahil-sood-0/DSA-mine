#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

};
Node* head = new Node;
void Insert(int x)
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp-> data = x;
    temp-> next = NULL;
    head=temp;
}
void cout;

int main()
{
        head = NULL;
        cout<<"How many numbers";
        int n,x;
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            cout<<"Enter the number";
            cin>> x;
            Insert(x);
            Print();

        }
}