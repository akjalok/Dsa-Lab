#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    int a,b;
    void count(int *a,int b,int l,int u);
    printf("Number of elements in array:");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Enter the lower and upper limits:");
    scanf("%d%d",&a,&b);
    count(ptr,n,a,b);
}
void count(int a[],int b,int l, int u){
    int count=0;
    for(int i=0;i<b;i++){
        if(a[i]>=l&&a[i]<=u){
            count++;
        }
    }
    printf("%d",count);
}