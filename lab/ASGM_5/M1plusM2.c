#include <stdio.h>

int main(){
    int rows, cols;
    // Get the dimensions (rows and columns) of the matrices
    printf("Enter the number of rows for matrices M1 and M2: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for matrices M1 and M2: ");
    scanf("%d", &cols);
    //Initialize matrices M1, M2, and Ma
    int M1[rows][cols], M2[rows][cols], Ma[rows][cols];
    //Input values for matrix M1
    printf("Enter values for matrix M1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("Enter M1[%d][%d]: ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    // Input values for matrix M2
    printf("Enter values for matrix M2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
                printf("Enter M2[%d][%d]: ", i, j);
                scanf("%d", &M2[i][j]);
            }
        }
    //Calculate the sum matrix Ma = M1 + M2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Ma[i][j] = M1[i][j] + M2[i][j];
        }
    }

    printf("Sum matrix Ma = M1 + M2: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", Ma[i][j]);
        }
        printf("\n");
    }
    return 0;
}