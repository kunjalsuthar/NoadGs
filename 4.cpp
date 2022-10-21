#include <iostream>
using namespace std ;
int main ()
{
    int a[5] , i, s ;
    for (i=0;i<5;i++)
    {
        printf (" Enter a[%d] : " ,i ) ;
        scanf ("%d" , &a[i]);
    }
    for (i=0;i<5;i++)
    {
        s=a[0];
        a[0]=a[4];
        a[4]=s;
        printf(" a[%d] : %d\n " ,i,a[i]);
    }
}