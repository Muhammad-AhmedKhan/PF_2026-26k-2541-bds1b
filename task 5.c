#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d3[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}
    };
    int verify = 0;
    int i = 0;
    int k = 0;
    int l = 0;
    for(i = 0; i < 2 ; i++){
    	for (k = 0; k < 3 ; k++){
    		for (l = 0; l < 3 ; l++){
    		if(d3[i][k][l] == d3[i+1][k][l]){
    			verify += 1;
			}}}
		if(verify == 9){
			printf("layer is %d the same as %d\n", i, i+1);
		}
		else{
			printf("layer is %d not the same as %d",i,i+1);
		}
		}

	return 0;

}
