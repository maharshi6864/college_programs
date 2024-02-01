#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    int *aa = &ptr;
    printf("Hello world \n");
    printf("Address of the variable >>>%p\n", ptr);
    printf("value of the pointer variable >>>%d\n", *ptr);
    printf("address of pointer varibale >>%p\n", aa);

    return 0;
}