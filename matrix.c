#include <stdio.h>
int a_row, b_row, a_col, b_col, a[10][10], b[10][10], sum[10][10], sub[10][10], mul[10][10], tran_a[10][10], tran_b[10][10];

float det_a, det_b;

int m, n, i, j, row, col;

int matrix_mul_check, matrix_ope_check, matrix_add;

int val_matrix_mul(int a_row, int b_row, int a_col, int b_col);

int val_matrix_ope(int a_row, int b_row, int a_col, int b_col);

int add_matrix(int a[m][n], int b[m][n]);

int sub_matrix(int a[m][n], int b[m][n]);

int mul_matrix(int a[m][n], int b[m][n]);

int tran_matrix(int a[m][n]);

int det_matrix(int b[m][n]);

void display_matrix(int a[m][n], int row, int col);

int val_matrix_mul(int a_row, int b_row, int a_col, int b_col)
{
    if (a_row == b_col)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int val_matrix_ope(int a_row, int b_row, int a_col, int b_col){
    if (a_row == b_row && a_col == b_col){
        return 1;
    }
    else{
        return 0;
    }
}

int add_matrix(int a[m][n], int b[m][n]){
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

int sub_matrix(int a[m][n], int b[m][n]){

    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
}

int mul_matrix(int a[a_row][a_col], int b[b_row][b_col]){
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            mul[i][j] = a[i][j] * b[j][i];
        }
    }
}

int tran_matrix(int a[m][n]){
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            tran_a[j][i] = a[i][j];
        }
    }
}

int det_matrix(int b[m][n]){
}

void display_matrix(int a[m][n], int row, int col){

    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            printf("%d  ", a[i][j]);
        }
    }
}

int main(){
    printf("ENTER THE MATRIX One ROW SIZE And Column SIZE :\n");
    scanf("%d %d", &a_row, &a_col);
    printf("ENTER THE MATRIX Two ROW SIZE And Column SIZE :\n");
    scanf("%d %d", &b_row, &b_col);

    printf("ENTER THE ELEMENTS OF MATRIX One :\n");
    for (m = 0; m < a_row; m++){
        for (n = 0; n < a_col; n++){
            scanf("%d", &a[m][n]);
        }
    }
    printf("ENTER THE ELEMENTS OF MATRIX Two :\n");
    for (m = 0; m < b_row; m++){
        for (n = 0; n < b_col; n++){
            scanf("%d", &b[m][n]);
        }
    }
    printf("Addition Matrix  :\n");

    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            printf("%d  ", sum[i][j]);
        }
    }

    //sub_matrix( a[a_row][a_col], b[b_row][b_col]);
    printf("\nsubtraction Matrix  :\n");
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            printf("%d  ", sub[i][j]);
        }
    }

    printf("\nMul Matrix  :\n");
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            mul[i][j] = a[i][j] * b[j][i];
        }
    }
    for (i = 0; i < a_col; i++){
        for (j = 0; j < a_row; j++){
            printf("%d  ", mul[i][j]);
        }
    }

    printf("\nTranspose Mtrix one :\n");
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            tran_a[j][i] = a[i][j];
        }
    }
    for (i = 0; i < a_col; i++){
        for (j = 0; j < a_row; j++){
            printf("%d  ", tran_a[i][j]);
        }
    }
    printf("\nTranspose Mtrix two :\n");
    for (i = 0; i < a_row; i++){
        for (j = 0; j < a_col; j++){
            tran_b[j][i] = b[i][j];
        }
    }
    for (i = 0; i < b_col; i++){
        for (j = 0; j < b_row; j++){
            printf("%d  ", tran_b[i][j]);
        }
    }
}