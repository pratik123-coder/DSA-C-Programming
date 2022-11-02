#include<stdio.h>
int linearSearch(int arr[],int x,int index)
{
    index++;
    if (index<0)
    {
        return 1;
    }
    
    if (arr[index]==x){
        return index;
    }
    return linearSearch(arr,x,index);
    
    
    
}

int main()
{
    int n,index=0,a;
    printf("Enter total number of elements in array: ");
    scanf("%d",&n);
    int x;
    printf("Enter the element to be searched for: ");
    scanf("%d",&x);
    int arr[n];
    printf("Enter array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    a=linearSearch(arr,x,index);
    if (a!=1)
    {
        printf("element is present");
    }
    
    return 0;
}