#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr = &i;

    printf("the value of ptr is %d\n", ptr);
    ptr++;
    printf("the value of ptr is %d\n", ptr);

    return 0;
}