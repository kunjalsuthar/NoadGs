#include <stdio.h>
#include <stdlib.h>
#define n 10
int a[]={90,80,70,60,50,40,30,20,10,5};
void print(int a[])
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

int QuickSortc(int a[], int first, int last)
{
    int i, j, temp, pivot;
    if (first < last)
    {
        printf ("\nInside loop :- \n");
        print(a);
        pivot = first;
        i = first, j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;

        QuickSortc(a, first, j - 1);
        QuickSortc(a, j + 1, last);
    }
}

int main()
{   
    //int a[n];
    //for (int i = 0; i < n; i++)
        //a[i] = rand() % 99 + 1;

    QuickSortc(a, 0, n - 1);
    printf("\n After sorting Array: \n");
    print(a);
}