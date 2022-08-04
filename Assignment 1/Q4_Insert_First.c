#include <stdio.h>

int main()
{
    int a, z;
    printf("Enter the number of elements in the array ");
    scanf("%d", &a);
    printf("Enter the elements of the array ");
    int b[a + 1];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Enter the element to be inserted ");
    scanf("%d", &z);
    for (int i = a; i > 0; i--)
    {
        b[i] = b[i - 1];
    }
    b[0] = z;
    printf("The array after insertion is ");
    for (int j = 0; j <= a; j++)
    {
        printf("%d ", b[j]);
    }
    return 0;
}