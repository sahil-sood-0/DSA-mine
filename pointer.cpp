#include <iostream>
using namespace std;

int main()
{

    int x= 5;
    int* p = &x;
    *p = 6;
    int** q= &p;
    int*** r= &q;
    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<*(*q)<<endl; // Good practice is we are not sure of precedence
    cout<<**r<<endl;
    cout<<***r<<endl;
    
    ***r = 10;
    cout<<"x= "<<x<<endl;

}


// GFG pointer
// void geeks()
// {
//     int var = 20; 
      
//     //declare pointer variable    
//     int *ptr; 
      
//     //note that data type of ptr and var must be same
//     ptr = &var;    
  
//     // assign the address of a variable to a pointer
//     cout << "Value at ptr = " << ptr << "\n";
//     cout << "Value at var = " << var << "\n";
//     cout << "Value at *ptr = " << *ptr << "\n";     
// }
// //Driver program
// int mains()
// {
//     geeks();
// }