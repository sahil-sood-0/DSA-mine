#include <iostream>
using namespace std;

// Printing a string method 2
void print1(char* C)
{
    while(*C != '\0')
    {
        cout<<*C;
        C++;
    }
    cout<<"\n";
}

int main()
{
    char C[] = "Hello frnds again";
    print1(C);
}