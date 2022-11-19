#include <stdio.h>
#include <stdlib.h>
#define n 10
int a[] = {1, 4, 7, 9, 16, 56, 70, 77, 82, 90};
int low, high ;
int mid;
int BS(int f,int low, int high)
{
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == f)
            return mid + 1;
        else if (a[mid] < f)
            return BS(f,mid+1,high);
        else
            return BS(f,low,mid-1);
    }
    return -1;
}
int main()
{
    
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    
    int ele;
    printf("Element : ");
    scanf("%d", &ele);
    int b = BS(ele,0,n-1);
    if (b == -1)
        printf(" Element is not found .....");
    else
        printf(" Element is foundat %d position ", b);
    return 0;
}
