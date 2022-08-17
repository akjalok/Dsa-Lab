#include <stdio.h>
void fun(int n){
 int arr[n];
 int c;
    for(int i=0;i<2*n;i=i+2){
        c=(i/2)+1;
        printf("Enter the coefficient for term %d:",c);
        scanf("%d",&arr[i]);
        printf("Enter the power of the term:");
        scanf("%d",&arr[i+1]);
    }
    for(int i=0;i<2*(n-1);i=i+2){

        if(arr[i+2]>0)
        printf("%dx^%d+",arr[i],arr[i+1]);
        else if(arr[i+2]<0)
       printf("%dx^%d",arr[i],arr[i+1]);
    }
    if(arr[2*n-1]==0){
        printf("%d",arr[2*n-2]);
    }
    else
    printf("%dx^%d",arr[2*n-2],arr[2*n-1]);
}
int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    fun(n);
     
    return 0;
}