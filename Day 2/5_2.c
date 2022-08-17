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
   for(int i=0;i<b;i++){
    if(i==b-1){
        arr[i]=-1;
    }
    else if(a[i]>a[i+1]){
        int n=1;
        while(a[i]>a[i+n]&&(i+n)<b){
            n++;
            if (n>=b-i-1&&a[i]>a[b-1]){
                arr[i]=-1;
                break;
            }
            else if(a[i]<a[i+n]){
                arr[i]=a[n+i];
                break;  
            }  
        }
    }
     else if(a[i+1]>a[i])
     arr[i]=a[i+1];
   }
    for(int i=0;i<b;i++){
        printf("%d ",arr[i]);
    }
    }