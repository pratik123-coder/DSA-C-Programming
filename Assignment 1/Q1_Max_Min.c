#include <stdio.h>

int maximun(int arr[], int n)
{
    int a = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    return a;
}

int minimum(int arr[], int n)
{
    int a = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < a)
        {
            a = arr[i];
        }
    }
    return a;
}
int main()
{
    int n;
    printf("Enter the size of array\t ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxi = maximun(arr, n);
    int mini = minimum(arr, n);

    printf("Maximum number is %d\n", maxi);
    printf("Minimum number is %d\n", mini);
}