#include <iostream>
#define n 5
int a[n];
int top = -1; 

void insert (int val)
{
    if (top >= n - 1)
    printf ("\n Overflow\n");
    else
    {
        a[++top] = val ;
        printf ("Insert Value is : %d\t",val);
    }
}

void firstinsert (int val)
{
    if (top >= n - 1)
    {
        printf ("\n Overflow\n");
    }
    else 
    {
        top++;
        for (int i = top; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val ;
        printf ("Insert Value is : %d\t\n",val);
    }
}

void delet ()
{
    if (top == -1)
    printf ("Array is Empty");
    else 
    {
        printf ("Delete Value : %d\n",a[top]);
        --top;
    }
}

void firstdelete ()
{
    int i, Value;
    if (top == -1)
    printf ("Array is Empty");
    else 
    {
        Value = a[0];
        for (i=0;i<top;i++)
        {
            a[i]=a[i+1];
        }
        printf ("\nDelete Value : %d\n",Value);
        top--;
    }
}

void display ()
{
    for (int i=0;i<=top;i++)
    printf ("a[%d] : %d\t\t",i,a[i]);
}

int main ()
{
    int ch , x;
    while (ch != 0)
    {
        printf ("\n1.insert operation\n");
        printf ("2.delet operation\n");
        printf ("3.Firstinsert operation\n");
        printf ("4.firstdelete operation\n");
        printf ("5.displayoperation\n");
        printf ("0.Exit\n");
        printf (" Enter Your Choice");
        scanf ("%d")

    }
}