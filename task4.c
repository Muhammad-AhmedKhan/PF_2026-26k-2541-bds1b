#include <stdio.h>

int main() {
    int array[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}},
        {{2, 4, 6}, {8, 1, 3}, {5, 7, 9}}
    };

    int total = 0;
    int max = array[0][0][0];
    int min = array[0][0][0];
    int totalele = 27;

    for (int i = 0; i < 3; i++) {
        int layersum = 0;
        printf("Layer %d\n", i + 1);
        
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                int val = array[i][j][k];
                printf("%d ", val);
                
                layersum += val;
                total += val;
                if (val > max) max = val;
                if (val < min) min = val;
            }
            printf("\n");
        }
        printf("Total for Layer %d: %d\n\n", i + 1, layersum);
    }

    printf("Overall 3D Cube Insights\n");
    printf("Total Sum: %d\n", total);
    printf("Average Value: %.2f\n", (float)total / totalele);
    printf("Maximum Value: %d\n", max);
    printf("Minimum Value: %d\n", min);

    return 0;
}