#include<stdio.h>
int largest(int* a,int b){
    for(int i=0;i<b;i++){
        for(int j=i+1;j<b;j++){
            int t;
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=a[i];
            }
        }
    }
    int c=a[b-1];
    return c;
}
void fun(int n){
int r[n],c[n],val[n];
printf("Enter the tuples :\n");
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&r[i],&c[i],&val[i]);
    }
    int m,k;
    m=largest(*r,n);
    k=largest(*c,n);
    int arr[m][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        arr[c[i]][r[i]]=arr[c[i]][r[i]]+val[i];
    }
    printf("transpose of array:");
    for(int i=0;i<k;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}
int main(){
    int n;
    printf("Enter the number of tuples:");
    scanf("%d",&n);

    fun(n);

    }