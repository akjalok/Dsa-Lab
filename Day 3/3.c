#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n;
    int t;
    int k;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    arr=(int*)malloc(n*sizeof(n));
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("Kth Largest digit:%d\n",arr[n-k]);
    printf("Kth Smallest digit:%d\n",arr[k-1]);
}