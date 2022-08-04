#include <stdio.h>
int main()
{
    int b, c, i, j, k;
    printf("Enter the number of elements in the first array ");
    scanf("%d", &b);
    printf("Enter the number of elements of the second array ");
    scanf("%d", &c);
    int a[b], b[c];
    printf("Enter 1st array elements ");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter 2nd array elements ");
    for (i = 0; i < c; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[b + c];
    for (i = 0; i < b; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < c; j++)
    {
        c[i] = b[j];
        i++;
    }
    printf("\nThe merged array is ");
    for (k = 0; k < b + c; k++)
    {
        printf("%d ", c[k]);
    }
    return 0;
}