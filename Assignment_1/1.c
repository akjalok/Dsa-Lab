#include <stdio.h>
#include <stdlib.h>
void inverse(int** a,int n,int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    }


int main(){
    int n,m;
    int** ptr;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&n,&m);
    ptr = (int **)malloc(n * sizeof(int *));
    for (int i=0;i<n;i++)
    {
        ptr[i] = (int *)malloc(m * sizeof(int));
    }
   
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            scanf("%d",&ptr[i][j]);
    }
    inverse(ptr,n,m);

}