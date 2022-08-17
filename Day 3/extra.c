#include <stdio.h>
#include <stdlib.h>

void input(int **a){
    int n=2;
    
    a = (int **) malloc(n * sizeof(int *));
	for(int i=0; i<n; i++)
	{
		a[i] = (int *) malloc(i * sizeof(int));
	}
	//Read elements into matrix
	printf("Enter matrix elements: ");
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d",((a+i)+j));
		}
	}
}
void display(int **a){
    int n=2 ;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf(" %d ",((a+i)+j));
        }
        printf("\n");
    }
}
void addmat(int (*a1)[2],int (*a2)[2]){
    int n=2;
    
    int *a=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n; i++){
    a=(int*)malloc(i*sizeof(int));
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            *((a+i)+j)=*((a1+i)+j) + *((a2+i)+j);
        }
    }
    display(**a);
}
}
// void mulmat(int(*a1)[2],int (*a2)[2]){
//     int n=2;
//     int *a=(int**)malloc(n*sizeof(int*));
//     for(int i=0;i<n; i++){
//     (a)=(int*)malloc(i*sizeof(int));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             *((a+i)+j)=0;
//             for(int k = 0; k < n; k++)
//             *((a+i)+j)+=(((a1+i)+k) * ((a1+k)+i));
//         }
//     }
//     display(a);
// }
// }
// void Trace(int** a[2]){
//     int Sum=0;
//     for(int i = 0; i < 2; i++)
//   	{
//    		Sum += *((a+i)+i);
//   	}
 
//  	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );
// }


int main(){
    int** A[2][2],** B[2][2];
    input(A[2][2]);
    input(B[2][2]);
    
    addmat(A,B);
    // mulmat(A,B);
    // Trace(*A);
    

    return 0;
}