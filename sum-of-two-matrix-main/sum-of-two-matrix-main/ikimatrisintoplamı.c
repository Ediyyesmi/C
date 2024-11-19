#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int row, column, i, j;
	printf("enter number of rows: ");
	scanf("%d" ,&row);
	printf("enter number of columns: ");
	scanf("%d" ,&column);
	
	
	int matrixx[row][column];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\nmatrixx[%d][%d]: " ,i, j);
			scanf("%d" ,&matrixx[i][j]);
		}
	}
	
	printf("\nyour array\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%3d" ,matrixx[i][j]);
		}
		printf("\n");
    }
    
    
    
    
    	int matrix[row][column];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\nmatrix[%d][%d]: " ,i, j);
			scanf("%d" ,&matrix[i][j]);
		}
	}
	
	printf("\nyour array\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%3d" ,matrix[i][j]);
		}
		printf("\n");
    }
    printf("\n\n");
    
    
    
    
    int c[row][column];
    printf("c matrisiniz: \n");
    
    for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			c[i][j]=matrixx[i][j]+matrix[i][j];
			printf("%2d " ,c[i][j]);
		}
		printf("\n");
	}
    
	
	
	return 0;
}
