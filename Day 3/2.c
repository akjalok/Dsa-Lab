#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    int **ptr,**ptr2;
    printf("Enter n and m:");
    scanf("%d%d",&n,&m);
    ptr = (int **)malloc(n * sizeof(int *));
    for (int i=0;i<n;i++){
        ptr[i] = (int *)malloc(m * sizeof(int));
    }
    ptr2 = (int **)malloc(n * sizeof(int *));
    for (int i=0;i<n;i++){
        ptr2[i] = (int *)malloc(m * sizeof(int));
    }
    printf("Enter elements:\n");
    for (int i=0;i<n;i++){
        for (int j=0; j<m;j++){
            scanf("%d",&ptr[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0; j<m;j++){
           ptr2[i][j]=ptr[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0; j<m;j++){
           for(int k=j+1;k<m;k++){
            int t;
            if(ptr[i][j]>ptr[i][k]){
                t=ptr[i][j];
                ptr[i][j]=ptr[i][k];
                ptr[i][k]=t;     
            }
           }
        }
    }
   
    
    printf("Matrix if rows are arranged in ascending order:\n");
    for (int i=0;i<n;i++){
        for (int j=0; j<m;j++){
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
     for (int i=0;i<n;i++){
        for (int j=0; j<m;j++){
           for(int k=i+1;k<n;k++){
            int t;
            if(ptr2[i][j]<ptr2[k][j]){
                t=ptr2[i][j];
                ptr2[i][j]=ptr2[k][j];
                ptr2[k][j]=t;     
            }
           }
        }
    }
    printf("Matrix if columns are arranged in descending order:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",ptr2[i][j]);
        }
        printf("\n");
    }
}