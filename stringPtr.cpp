#include <iostream>
using namespace std;

// Printing a string
void print(char* C)
{
    int i = 0;
    while(C[i] != '\0')
    {
        cout<<C[i];
        i++;
    }
    cout<<"\n";
}