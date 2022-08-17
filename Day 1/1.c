#include <stdio.h>
int main(){
    void smallestno2(int a[],int b);
    void largestno2(int a[],int b);
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for (int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    if (n<2){
        printf("INVALID");
    }
    else {
    smallestno2(arr,n);
    largestno2(arr,n);
}
}
void smallestno2(int a[],int b){
    
    int s,s2;
    s=a[0];
    s2=a[0];
    for(int i=0;i<b;i++){
        if(a[i]<s){
            s2=s;
            s=a[i];
        }
        else if(a[i]<s2&&a[i]!=s){
            s2=a[i];
        }
        
       }
       printf("The second smallest elemnet:%d\n",s2); 
}
void largestno2(int a[],int b){
 int s,s2;
    s=a[0];
    s2=a[0];
    for(int i=0;i<b;i++){
        if(a[i]>s){
            s2=s;
            s=a[i];
        }
        else if(a[i]>s2&&a[i]!=s){
            s2=a[i];
        }
        
       }
       printf("The second largest elemnet:%d",s2); 
}