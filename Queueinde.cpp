#include <stdio.h>
#define n 5
int a[n], i;
int front = -1, rear = -1;
void insert(int val)
{
    if (rear >= n - 1)
    {
        printf("Array is overflow....");
    }
    else if (front == -1)
    {
        ++front;
        a[++rear] = val;
    }
    else
        a[++rear] = val;
}
void delet()
{
    if (front < 0)
        printf("array is underflow....");
    else if (front == rear)
    {
        front = rear = -1;
        // ++rear;
        //++front;
    }
    else
        ++front;
}
void print()
{
    if (front < 0)
        printf("Array is Empty....");
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf(" %d ", a[i]);
        }
    }
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert (60);
    print();
    delet();
    delet();
    delet();
    delet();
    delet();
    delet();
    print();
}