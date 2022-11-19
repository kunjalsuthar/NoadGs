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
    insert (20);
    insert (30);
    insert (40);
    insert (50);
    //insert (60);
    display ();
    Delete ();
    Delete ();
    Delete ();
    Delete ();
    Delete ();
    Delete ();

    display ();
    
}