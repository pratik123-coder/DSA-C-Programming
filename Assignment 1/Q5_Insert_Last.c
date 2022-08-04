#include <stdio.h>

int main()
{
    int b, z, pos;
    printf("Enter the number of elements in the array ");
    scanf("%d", &b);
    printf("Enter the elements of the array ");
    int a[b + 1];
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be inserted ");
    scanf("%d", &z);
    printf("Enter the position of the element to be inserted ");
    scanf("%d", &pos);

    for (int i = b; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = z;
    printf("The array after insertion is ");
    for (int j = 0; j <= b; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}