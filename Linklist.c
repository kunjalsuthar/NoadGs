#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node var1, var2, var3, var4, var5;
    
    var1.data = 65;
    var1.ch = 'A';
    var1.ptr = NULL;

    var2.data = 66;
    var2.ch = 'B';
    var2.ptr = NULL;

    var3.data = 67;
    var3.ch = 'C';
    var3.ptr = NULL;

    var4.data = 68;
    var4.ch = 'D';
    var4.ptr = NULL;

    var5.data = 69;
    var5.ch = 'E';
    var5.ptr = NULL;

    printf ("var1 : %d\t%c\n",var1.data,var1.ch);
    printf ("var2 : %d\t%c\n",var2.data,var2.ch);
    printf ("var3 : %d\t%c\n",var3.data,var3.ch);
    printf ("var4 : %d\t%c\n",var4.data,var4.ch);
    printf ("var5 : %d\t%c\n",var5.data,var5.ch);

    // var1.ptr = &var2;
    // var2.ptr = &var3;
    // var3.ptr = &var4;
    // var4.ptr = &var5;

    // printf("\nvar1 : %d\t%c", var1.ptr->data, var1.ptr->ch);
    // printf("\nvar2 : %d\t%c", var2.ptr->data, var2.ptr->ch);
    // printf("\nvar3 : %d\t%c", var3.ptr->data, var3.ptr->ch);
    // printf("\nvar4 : %d\t%c", var4.ptr->data, var4.ptr->ch);
}
