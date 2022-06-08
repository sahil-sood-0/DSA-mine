#include <iostream>
using namespace std;

int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {

        sum+= A[i]; // A[i] is *(A+i)
    }
    return sum;
}

int main()
{
    int A[] = {0,1,2,3,4,5,6,7};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A,size);  // A can be used as &A[0]
    cout<<"Sum of elements is "<< total<<endl;

}