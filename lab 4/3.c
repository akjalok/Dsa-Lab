#include<stdio.h>

void fun(int r,int c){
printf("Enter the matrix:\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        printf("Three tuple form:\n");
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]!=0){
                printf("%d %d %d \n",i+1,j+1,arr[i][j]);
            }
        }
        }
}
int main(){
    int r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&r,&c);

    fun(r,c);

    }
  