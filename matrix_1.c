#include <stdio.h>
int add(int x,int y);
int add(int x,int y){
    int sum;
    sum = x +y;
    return sum;
}


void  add_matrix(int a_row, int a_col, int a[a_row][a_col],int b[a_row][a_col],int  sum[a_row][a_col]);
void  add_matrix(int a_row, int a_col, int a[a_row][a_col],int b[a_row][a_col],int  sum[a_row][a_col]){
    int m,n;
    for (m = 0; m < a_row; m++){
        for (n = 0; n < a_col; n++){
            sum[m][n] = a[m][n] +b[m][n];
        }
    }
}

void  sub_matrix(int a_row, int a_col, int a[a_row][a_col],int b[a_row][a_col],int  sub[a_row][a_col]);
void  sub_matrix(int a_row, int a_col, int a[a_row][a_col],int b[a_row][a_col],int  sub[a_row][a_col]){
    int m,n;
    for (m = 0; m < a_row; m++){
        for (n = 0; n < a_col; n++){
            sub[m][n] = a[m][n] - b[m][n];
        }
    }
}

void  mul_matrix(int a_row, int a_col, int a[a_row][a_col],int b[a_row][a_col],int  mul[a_row][a_col]);
void  mul_matrix(int a_row, int a_col, int a[a_row][a_col],int b[a_row][a_col],int  mul[a_row][a_col]){
    int m,n;
    for (m = 0; m < a_row; m++){
        for (n = 0; n < a_col; n++){
            mul[m][n] = a[n][m] *b[m][n];
        }
    }
}



void print_matrix(int row, int col,int arr[row][col]);
void print_matrix(int row, int col,int arr[row][col]){
    int m,n;
    for (m = 0; m < row; m++){
        for (n = 0; n < col; n++){
            printf("%d ",arr[m][n]);
        }
    }
}
void main(){

    int a_row,a_col,b_row,b_col,m,n;
    printf("Enter The Size of matrix one : \n");
    scanf("%d %d", &a_row,&a_col);
    printf("Enter The Size of matrix two : \n");
    scanf("%d %d", &b_row,&b_col);
    int a[a_row][a_col],b[b_row][b_col],sum[a_row][a_col],sub[a_row][a_col];
   
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

    add_matrix(a_row,a_col, a[a_row][a_col], b[a_row][a_col],  sum[a_row][a_col]);
    for (m = 0; m < b_row; m++){
        for (n = 0; n < b_col; n++){
            printf("%d", sum[m][n]);
        }
    }

    
}
