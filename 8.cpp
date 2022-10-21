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
void finsert ()
{
    if(top <= 0 && top >= n)
    {
        
        for(int i = top; i > n; i--)
            a[i] = a[i-1];
        a[n] = top;
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
void fdelet ()    
{
    for(int i = top; i <= n; i++)
    {
        printf("%d \n", a[i]);
        printf("Invalid Position\n");
    }
}
int main ()
{
    insert (10);
    insert (20);
    insert (30);
    insert (40);
    insert (50);
    display ();
    finsert ();
    display ();
    fdelet ();
    display ();
}