#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row = 2;
	int col = 3;
	int row2 = 3;
	int col2 = 2;

	int one[3][3] = {{1, 2, 3}, {4, 5, 6}};
    int two[3][3] = {{7, 8}, {9, 1}, {2, 3}};
    int three[3][3] = {0};
    int o = 0;
    int p = 0;
    
    
	
	if(row != col2){
		printf("Row and colum not equal ");
	}
	
	for(int i = 0; i <row; i++){
		for(int o = 0; o < col2; o++);
			for(int p = 0; p < col; p++);
			three[i][o] += one[i][p] * two[p][o];}
			
	printf("results \n");
	
	for (int i = 0; i < row; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d \n", three[i][j]);
        }
        printf("\n");
    }
		
		

	return 0;
}