#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int twod[3][3] = {
	{5, 10, 16},{3, 6, 7},{10,15,7}
	};
	int trans[3][3];
	
	printf("The orignal\n");
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3 ; o++){
			printf("%d ", twod[i][o]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 3; i++){
		for (int o = 0; o < 3; o++){
			trans[i][o] = twod[o][i];
		}}
	
	printf("tranpose \n");
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3 ; o++){
			printf("%d ", trans[i][o]);
		}
		printf("\n");
	}
	
	int det = twod[0][0] * (twod[1][1] * twod[2][2] - twod[1][2] * twod[2][1]) -
                twod[0][1] * (twod[1][0] * twod[2][2] - twod[1][2] * twod[2][0]) +
                twod[0][2] * (twod[1][0] * twod[2][1] - twod[1][1] * twod[2][0]);
    	
    	printf("det %d", det);
	
	float cofactor[3][3];
    for (int i = 0; i < 3; i++) {
        for (int o = 0; o < 3; o++) {
            int r1 = (i == 0) ? 1 : 0;
            int r2 = (i == 2) ? 1 : 2;
            if (i == 1) { r1 = 0; r2 = 2; }
            
            int c1 = (o == 0) ? 1 : 0;
            int c2 = (o == 2) ? 1 : 2;
            if (o == 1) { c1 = 0; c2 = 2; }

            float subdet = (twod[r1][c1] * twod[r2][c2]) - (twod[r1][c2] * twod[r2][c1]);
            int sign = ((i + o) % 2 == 0) ? 1 : -1;
            cofactor[i][o] = subdet * sign;
        }
    }
    
    float adj[3][3];
    for (int i = 0; i < 3; i++) {
        for (int o = 0; o < 3; o++) {
            adj[i][o] = cofactor[o][i];
        }
    }
    
    printf("adjoint \n");
    for (int i = 0; i < 3; i++) {
        for (int o = 0; o < 3; o++) {
            printf("%.2f ", adj[i][o]);
        }
        printf("\n");
    }
    
    float inv[3][3];
    for (int i = 0; i < 3; i++) {
        for (int o = 0; o < 3; o++) {
            inv[i][o] = adj[i][o] / (float)det;
        }
    }
    
    printf("inverse \n");
    for (int i = 0; i < 3; i++) {
        for (int o = 0; o < 3; o++) {
            printf("%.2f ", inv[i][o]);
        }
        printf("\n");
    }
	
	
	
	
	
	
	return 0;
}