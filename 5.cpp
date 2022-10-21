#include <iostream>
using namespace std;
int main ()
{
    int a[] = {10,20,30,40,50,60,70} ;
    int a[] = {} ;
    printf (" size of arrey : %d ",sizeof (a)/sizeof (a[0]) ); 
    printf (" Size of int :  %d ",sizeof (int));
    printf (" Size of int :  %d ",sizeof (char));
    printf (" Size of int :  %d ",sizeof (float));
    printf (" Size of int :  %d ",sizeof (double));
}