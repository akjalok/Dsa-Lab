#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    void reverse(int *a,int b);
    printf("Number of elements in array:");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    reverse(ptr,n);
}
void reverse(int *a,int b){
    for(int i=b-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}