#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    int a;
    void search(int *a,int b,int c);
    printf("Number of elements in array:");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element you are searching for:");
    scanf("%d",&a);
    search(ptr,n,a);
}
void search(int *a,int b,int c){
 for(int i=0;i<b;i++){
        if(a[i]==c){
            printf("The element is at:%d",i+1);
            break;
        }
    }
}