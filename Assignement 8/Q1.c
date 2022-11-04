#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    *a=temp;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            swap(&arr[j],&arr[j+1]);
        }
    }
}
void insertionSort(int arr[], int n){
    int i,j,key;
    for ( i = 0; i < n; i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr{j+1}=key;
    }        
}
void selectionSort(int arr[],int n){
    int i,j,idx;
    for ( i = 0; i < n-1; i++)
    {
        idx=i;
        for ( j = i+1; j < n; j++)
        {
            if (arr[j]<arr[idx])
            {
                idx=j;
            }
            if (idx !=i)
            {
                swap(&arr[idx],&arr[i]);
            }     
        }    
    }    
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) 
        largest = left;
    if (right < n && arr[right] > arr[largest]) 
        largest = right;
    if (largest != i) { 
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n){
    for (int i = n / 2 - 1; i >= 0; i--){ 
        heapify(arr, n, i);
        }
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array is\n");
    printArray(arr, n);
}