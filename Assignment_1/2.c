#include <stdio.h>
void inverse(){
	int arr877[3][3],i877,j877;
	float d877=0;
	printf("Enter a 3x3 matrix:\n");
	for(i877=0;i877<3;i877++){
		for(j877=0;j877<3;j877++){
			scanf("%d",&arr877[i877][j877]);
		}
	}
	for(i877=0;i877<3;i877++){
	d877=d877+(arr877[0][i877]*(arr877[1][(i877+1)%3]*arr877[2][(i877+2)%3]-arr877[1][(i877+2)%3]*arr877[2][(i877+1)%3]));
	}
	printf("\nInverse matrix:\n");
	
	for (i877=0;i877<3;i877++){
	    for(j877=0;j877<3;j877++){
	        printf("%f\t",((arr877[(i877+1)%3][(j877+1)%3]*arr877[(i877+2)%3][(j877+2)%3])-(arr877[(i877+1)%3][(j877+2)%3]*arr877[(i877+2)%3][(j877+1)%3]))/d877);
	    }
	    
	    printf("\n");
	}
}
int main(){
	inverse();
	return 0;
}
