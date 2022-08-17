#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    void sort(int *a,int b);
    printf("Number of elements in array:");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    sort(ptr,n);
}
void sort(int *a,int b){
    int temp;
    for(int i=0;i<b;i++){
        for(int j=0;j<b-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array:");
    for(int i=0;i<b;i++){
         printf("%d ",a[i]);
    }
}