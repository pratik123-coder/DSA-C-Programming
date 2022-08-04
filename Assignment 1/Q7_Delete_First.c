#include<stdio.h>

int main(){
    int b,z,pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&b);
    printf("Enter the elements of the array: ");
    int a[b];
    for(int i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    pos=0;
    for(int i=pos;i<b;i++){
        a[i]=a[i+1];
    }
    printf("The array after deletion is: ");
    for(int j=0;j<b-1;j++){
        printf("%d ",a[j]);
    }
    return 0;
}