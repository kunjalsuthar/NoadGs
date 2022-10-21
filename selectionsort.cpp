#include <stdio.h>
#include <stdlib.h>
#define n 20

//int a[n] = {66, 4, 46, 56, 56, 24, 66, 98, 54};
int a[n] = {1, 8, 10, 16, 21, 25, 30, 36, 39, 40};

int selectionsort(int a[])
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            //if (a[i] > a[j])
            if (a[i] < a[j])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
}

int main()
{
    //int a[n];
    //for (int i = 0; i < n; i++)
    //{
      //   a[i] = rand() % 99 + 1;
    //}
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
    selectionsort(a);
    printf("\nAfter Sorting.......\n");
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}