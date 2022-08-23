#include <stdio.h>
#include <stdlib.h>
void inverse(int** a877,int n877,int m877){
    printf("The inverse is:\n");
    for(int i877=0;i877<m877;i877++){
        for(int j877=0;j877<n877;j877++){
            printf("%d ",a877[j877][i877]);
        }
        printf("\n");
    }

    }


int main(){
    int n877,m877;
    int** ptr877;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&n877,&m877);
    ptr877 = (int **)malloc(n877 * sizeof(int *));
    for (int i877=0;i877<n877;i877++)
    {
        ptr877[i877] = (int *)malloc(m877 * sizeof(int));
    }
   
    printf("Enter the elements:\n");
    for(int i877=0;i877<n877;i877++){
        for(int j877=0;j877<m877;j877++)
            scanf("%d",&ptr877[i877][j877]);
    }
    inverse(ptr877,n877,m877);

}