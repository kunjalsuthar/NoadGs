#include <iostream>
#define n 5 
int a[n];
int top = -1 ;
void insert (int val)
{
    if (top >= n -1)
    {
        printf ("Overflow \n");
    }
    else 
    {
        a[++top] = val ;
        //printf (" Insert Value is : %d " , val);
    }
}
void display ()
{
    for (int i = 0; i<= top; i++)
    {
        printf (" %d " ,a[i]);
    }
}
void Delete ()
{
    if (top < 0)
    {
        printf ("\n Exit ");
    }
    else 
    {
        --top ;
    }
}
int main ()
{
    insert (10);
    int a ;
    printf ("1. insert value ");
    printf (" 2. delete value ") ;
    printf (" 3. exit ") ;
    printf (" value a :");
    scanf ("%d",&a);
    switch (a)
    {
        case 1:
        printf ("\n insert : ");
        break;
        case 2 :
        printf ("\n delet :");
        break;
        case 3 :
        printf ("\n Exit :");
        break;
    }
}