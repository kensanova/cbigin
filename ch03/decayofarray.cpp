#include <iostream>
using namespace std;
 
/*
* Passing an array BY VALUE
* Decay occurs
*/
void aDecay(int *p) {
    cout << "Paasing by Value - Modified size of array: ";
    cout << sizeof(p) << endl;
}
 
/*
* Passing an array BY POINTER
* Decay occurs
*/
void pDecay(int (*p)[7])
{
    cout << "Passing by Pointer - Modified size of array: ";
    cout << sizeof(p) << endl;
}

/*
* Passing an array BY REFERENCE
* Decay doesn't occur
*/
void fun(int (&p)[7])
{
    cout << "Passing by Reference - Modified size of array: ";
    cout << sizeof(p) << endl;
}
 
int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7,};
 
    // Printing original size of array
    cout << "Actual size of array is: ";
    cout << sizeof(a) <<endl;  // 28
 
    // Calling function BY VALUE
    aDecay(a);  // 8
     
    // Calling function BY POINTER
    pDecay(&a);  // 8
    
    // Calling function BY REFERENCE
    fun(a);  // 28
 
    return 0;
}