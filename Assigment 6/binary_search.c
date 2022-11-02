#include<stdio.h>
int recBinarySearch(int arr[],int stIndex,int edIndex,int x){
    if (edIndex>=stIndex)   
    {
        int mid= stIndex+(edIndex-stIndex)/2;
        if (arr[mid]==x)
        {
            return mid;
        }
        else if (arr[mid]>x)
        {
            return recBinarySearch(arr,stIndex,mid-1,x);
        }
        return recBinarySearch(arr,stIndex,mid+1,x);
    }
    return 1;
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
    int ret=recBinarySearch(arr,0,n-1,x);
    if (ret!=1)
    {
        printf("element is present");
    }
    return 0;
}