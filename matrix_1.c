#include <stdio.h>
int add(int x,int y);
int add(int x,int y){
    int sum;
    sum = x +y;
    return sum;
}

int add_matrix(int row, int col,int a[row][col],int b[row][col]);
int add_matrix(int row, int col,int a[row][col],int b[row][col]){
    int sum[row][col];
    int m,n;
    for (m = 0; m < row; m++){
        for (n = 0; n < col; n++){
            sum[m][n] = a[m][n] +b[m][n];
        }
    }
    return sum;
}


int sub_matrix(int row, int col,int a[row][col],int b[row][col]);
int sub_matrix(int row, int col,int a[row][col],int b[row][col]){
    int sub[row][col];
    int m,n;
    for (m = 0; m < row; m++){
        for (n = 0; n < col; n++){
            sub[m][n] = a[m][n] -b[m][n];
        }
    }
    return sub;
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

    print_matrix(a_row,a_col,sub_matrix(a_row,a_col,a,b));
   
    
}
