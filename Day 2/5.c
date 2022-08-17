#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *ptr;
    int n;
    void nge(int *a,int b);
    printf("Number of elements in array:");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
     printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    nge(ptr,n); 
    
}
void nge(int *a,int b){
   int arr[b];
   
   for (int i=0;i<b;i++){
    arr[i]=-1;
    for(int j=i+1;j<b;j++){
        if(a[j]>a[i]){
            arr[i]=a[j];
            break;
        }
    }
   }
    for(int i=0;i<b;i++){
        printf("%d ",arr[i]);
    }
    }
  
 
