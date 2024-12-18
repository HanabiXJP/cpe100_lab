#include <stdio.h>
#include <stdlib.h>

int main() {
    // Get the size of the matrix from the user
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the input matrix
    int** M1 = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        M1[i] = (int*)malloc(cols * sizeof(int));
    }

    // Get input values from the user
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter M1[%d][%d]: ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }

    // Print the input matrix
    printf("Input\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }

    // Allocate memory for the transpose matrix
    int** transpose = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        transpose[i] = (int*)malloc(rows * sizeof(int));
    }

    // Transpose the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = M1[i][j];
        }
    }

    // Print the transposed matrix
    printf("Output\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(M1[i]);
    }
    free(M1);

    for (int i = 0; i < cols; i++) {
        free(transpose[i]);
    }
    free(transpose);

    return 0;
}



// #include <stdio.h>

// int main(){
//     //เก็บค่า Matrix 3x3 แต่ละตัวเข้า Array 2 มิติ
//     int M1[3][3], transpose[3][3];
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++){
//             printf("Enter M1[%d][%d]|" ,i,j );
//             scanf("%d", &M1[i][j]);
//         }
//     }

//     printf("Input\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++){
//             printf("%d ", M1[i][j]);
//         }
//         printf("\n");
//     }

//     //transpose

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++){
//             transpose[j][i] = M1[i][j]; 
//         }
//     }

//     printf("Output\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++){
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }