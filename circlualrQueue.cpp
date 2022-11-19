#include <stdio.h>
#define n 5
int a[n];
int front = -1, rear = -1, i;
void display()
{
    i = front;
    printf("\n");
    if (front < 0)
    {

        printf("Array is emty......");
    }
    else
    {
        do
        {
            printf("%d\t", a[i]);
            i = (i + 1) % n;
        } while (i != (rear + 1) % n);
    }
}
void insert(int val)
{
    if ((rear + 1) % n == front)
        printf("------OVERFLOW------");
    else if (front == -1)
    {
        ++front;
        a[++rear] = val;
    }
    else
    {
        rear = (rear + 1) % n;
        a[rear] = val;
    }
}
void delet()
{
    if (front < 0)
        printf("------UNDERFLOW------");
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    // insert(60);
    display();
    delet ();
    display ();
    insert (60);
    delet ();
    display ();
}