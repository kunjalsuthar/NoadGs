#include <stdio.h>
#include <stdlib.h>
#define n 20

int linearsearch(int a[], int x)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        if (x == a[i])
            return i + 1;
    }
    return -1;
}

int main()
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 99 + 1;
    }
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
    int x;
    printf("\n Enter Search Elements : ");
    scanf("%d", &x);
    int b = linearsearch(a,x);
    if (b == -1)
        printf("Elements is not Found ....");
    else
        printf("Element is found at %d position ", b);
}