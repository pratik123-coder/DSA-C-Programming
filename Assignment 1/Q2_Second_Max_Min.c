#include <stdio.h>
int secondMax(int a[], int b){
  int max=a[0];
  int max2=a[0];
  for(int i=0;i<b;i++){
        if(a[i]>max){
            max2=max;
            max=a[i];
        }
       else if(a[i]>max2){
            max2=a[i];
       }
  }
  return max2;
}

int secondMin(int a[], int b){
    int min=a[0];
   
    int min2=a[1];
    for(int i=0;i<b;i++){
        if(a[i]<min){
            min2=min;
            min=a[i];
        }
    }
    return min2;
}
int main(){
    int b;
    printf("Enter the number of elements in the array ");
    scanf("%d",&b);
    printf("Enter the elements of the array ");
    int a[b];
    for(int i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    int max1 = secondMax(a,b);
    int min1 = secondMin(a,b);
    printf("Second maximum element is %d\n",max1);
    printf("Second minimum element is %d\n",min1);
    return 0;
}