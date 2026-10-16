#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int rows = 3;   int cols = 3;
	float mat[5][5] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}};
	
	printf("Matrix Properties Analysis:\n");
	
	if (rows == cols) { 
		printf("- Square Matrix\n"); 
	} else 
	{ 
		printf("- Rectangular Matrix\n"); 	}
	
	if (rows == 1) printf("- Row Matrix\n");
	if (cols == 1) 
	{
		printf("- Column Matrix\n")	}
	
	int isZero = 1;
	for (int i = 0; i < rows; i++) {
		for (int o = 0; o < cols; o++) 
		{
			if (mat[i][o] != 0) {
				isZero = 0;
			}	}
	}
	
	if (isZero) { 
		printf("- Zero Matrix\n"); 
		printf("- Null Matrix\n"); 
	}
	
	if (rows == cols) 
	{
		int isIdentity = 1;
		for (int i = 0; i < rows; i++) {
			for (int o = 0; o < cols; o++) 
			{
				if (i == o && mat[i][o] != 1) { 
					isIdentity = 0; 		}
				if (i != o && mat[i][o] != 0) 
					isIdentity = 0;}	}
		
		if (isIdentity) { 
			printf("- Identity Matrix\n"); 
		}
		
		int isDiagonal = 1;
		for (int i = 0; i < rows; i++) 
		{
			for (int o = 0; o < cols; o++) {
				if (i != o && mat[i][o] != 0) { 
					isDiagonal = 0; 		}
		          	}
		}
		
		if (isDiagonal) 
		{
			printf("- Diagonal Matrix\n");
			float firstDiag = mat[0][0];
			int isScalar = 1;
			for (int i = 1; i < rows; i++) {
				if (mat[i][i] != firstDiag) { 
					isScalar = 0; 	}
			}
			if (isScalar) { 
				printf("- Scalar Matrix\n"); 	}
		}
		
		int isUpper = 1; 
		int isLower = 1;
		for (int i = 0; i < rows; i++) 
		{
			for (int o = 0; o < cols; o++) {
				if (i > o && mat[i][o] != 0) { 
					isUpper = 0; 		}
				if (i < o && mat[i][o] != 0) { 
					isLower = 0; 	}		}
		}
		
		if (isUpper) { 
			printf("- Upper Triangular Matrix\n");	}
		if (isLower) 
		{
			printf("- Lower Triangular Matrix\n");}
		
		int isSymmetric = 1; 
		int isSkew = 1;
		for (int i = 0; i < rows; i++) {
			for (int o = 0; o < cols; o++) 
			{
				if (mat[i][o] != mat[o][i]) { 
					isSymmetric = 0; 
				}
				if (mat[i][o] != -mat[o][i]) { 
					isSkew = 0; 
			               	}   }
		}
		
		if (isSymmetric) { 
			printf("- Symmetric Matrix\n"); 
		}
		if (isSkew) 
		{printf("- Skew-Symmetric Matrix\n");}
		
		if (rows == 3) 
		{
			float det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
						mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
						mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
			
			if (det == 0) { 
				printf("- Singular Matrix\n"); 
	} else { 
			printf("- Non-Singular Matrix\n"); 
			}
		}
		
		float sq[5][5] = {0};
		for (int i = 0; i < rows; i++) {
			for (int o = 0; o < cols; o++) 
			{
				for (int k = 0; k < cols; k++) 
				{				
					sq[i][o] += mat[i][k] * mat[k][o];}
			}
		}
		
		int isIdempotent = 1; 
		int isNilpotent = 1;
		for (int i = 0; i < rows; i++) {
			for (int o = 0; o < cols; o++) {
				if (sq[i][o] != mat[i][o]) { 
					isIdempotent = 0; 
	}
				if (sq[i][o] != 0) { 
					isNilpotent = 0; 
				}}
		}
		
		if (isIdempotent) { 
			printf("- Idempotent Matrix\n"); 
		}
		if (isNilpotent) { 
			printf("- Nilpotent Matrix\n"); 
		}
	}
	
	return 0;
}
