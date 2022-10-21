#include <stdio.h>
#include <stdlib.h>
#define n 10
// int a[n] = {66, 4, 46, 56, 56, 24, 66, 98, 54};
int a[n] = {1, 8, 10, 16, 21, 25, 30, 36, 39, 40};
int bubblesort(int a[])
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            // if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}
int main()
{
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     a[i] = rand() % 99 + 1;
    // }
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
    bubblesort(a);
    printf("\nAfter Sorting.......\n");
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}