#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr,*arr2;
    int n;
   
    printf("Enter the number of elements:");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    arr2=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
   for(int i=0;i<n;i++){
        if(i==0){
            arr2[i]=arr[i]*arr[i+1];
        }
        else if(i==n-1){
            arr2[i]=arr[i]*arr[i-1];
        }
        else
            arr2[i]=arr[i-1]*arr[i+1];
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
}
