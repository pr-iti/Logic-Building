/*
pointers and pointer to pointer in cpp

*/

#include <iostream>
using namespace std;

int main()
{

    int a = 10;

    // int *myptr;

    int *myptr = &a;
    int **pptr = &myptr;

    cout << *myptr << " " << &a << "  " << *myptr << endl;
    cout << **pptr << " " << *pptr << " " << &myptr << " " << *myptr << " " << a << endl;

    return 0;
}