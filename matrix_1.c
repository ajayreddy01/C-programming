#include <stdio.h>
#include <stdlib.h>


int ** add_matrix(int a_row, int a_col, int **a,int **b);
int ** add_matrix(int a_row, int a_col, int **a,int **b){
    int m,n;
    int **sum;
    sum = calloc(a_row,sizeof(int*));
    for (size_t i = 0; i < a_col; i++)
    {
        /* code */
        sum[i] = calloc(a_col,sizeof(int*));
    }
       
    for (m = 0; m < a_row; m++){
        for (n = 0; n < a_col; n++){
            sum[m][n] = a[m][n] +b[m][n];
        }
    }
    return sum;
}


int ** sub_matrix(int a_row, int a_col, int **a,int **b);
int ** sub_matrix(int a_row, int a_col, int **a,int **b){
    int m,n;
    int **sub;
    sub = calloc(a_row,sizeof(int*));
    for (size_t i = 0; i < a_col; i++)
    {
        /* code */
        sub[i] = calloc(a_col,sizeof(int*));
    }
    
    for (m = 0; m < a_row; m++){
        for (n = 0; n < a_col; n++){
            sub[m][n] = a[m][n] - b[m][n];
        }
    }
    return sub;
}


int ** mul_matrix(int a_row,  int b_col, int **a,int **b);
int ** mul_matrix(int a_row,  int b_col, int **a,int **b){
    int m,n;
    int **mul;
    mul = malloc(sizeof(int*)*a_row);
    for (size_t i = 0; i < a_row; i++)
    {
        mul[i] = malloc(sizeof(int*)*b_col);
    }
    int sum = 0;
   for (int i = 0; i < a_row; i++) {
        for (int j = 0; j < b_col; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < b_col; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return mul;
}


int ** tran_matrix( int row, int col,int **a);

int ** tran_matrix( int row, int col,int **a){
    int **tran;
    tran = malloc(sizeof(int*)*col);
    for (size_t i = 0; i < row; i++)
    {
        tran[i] = malloc(sizeof(int*)*row);
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            tran[j][i] = a[i][j];
        }
    }
    return tran;
}


int  det( int row, int col,int **a);

int  det( int row, int col,int **a){
    int det;
    if (row == 3){
        det = a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])) - a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])) +a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
        return det;
    }
    if(row == 2){
        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        return det;
    }
}

int ** cofactor_matrix( int row, int col,int **a);

int ** cofactor_matrix( int row, int col,int **a){
    int **cofactor;
    if( row == 3 && col == 3){
        cofactor = calloc(row,sizeof(int*));
        for (size_t i = 0; i < row; i++)
        {
            cofactor[i] = calloc(col,sizeof(int*));
        }
        cofactor[0][0] =  1*(a[1][1]*a[2][2] - a[1][2]*a[2][1]);
        cofactor[0][1] =  -1*(a[1][0]*a[2][2] - a[1][2]*a[2][0]);
        cofactor[0][2] =  1*(a[1][0]*a[2][1] - a[1][1]*a[2][1]);
        cofactor[1][0] =  -1*(a[0][1]*a[2][2] - a[0][2]*a[2][0]);
        cofactor[1][1] =  1*(a[0][0]*a[2][2] - a[0][2]*a[2][0]);
        cofactor[1][2] =  -1*(a[0][0]*a[2][1] - a[0][1]*a[2][0]);
        cofactor[2][0] =  1*(a[0][1]*a[1][2] - a[0][2]*a[1][1]);
        cofactor[2][1] =  -1*(a[0][0]*a[1][2] - a[0][2]*a[1][0]);
        cofactor[2][2] =  1*(a[0][0]*a[1][1] - a[0][1]*a[1][0]);
        return cofactor;
    }
    else if( row ==2 && row == 2){
        
    }
    
}

int ** scalar_division(int row, int col,int **a,float scalar);
int ** scalar_division(int row, int col,int **a,float scalar){
    int **scalar_div_matrix;
    scalar_div_matrix = malloc(sizeof(int*)*row);
    for (size_t i = 0; i < row; i++)
    {
        scalar_div_matrix[i] = malloc(sizeof(int*)*row);
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            scalar_div_matrix[i][j] = a[i][j]/scalar;
        }
        
    }
    
    return scalar_div_matrix;
    

}
void print_matrix(int row, int col,int **arr);
void print_matrix(int row, int col,int **arr){
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
    int **a,**b;
    //int a_temp[a_row][a_col],b_temp[a_row][b_col];
    //int **a,**b;
   
    a = calloc(a_row,sizeof(int*));
    for (size_t i = 0; i < a_col; i++)
    {
        /* code */
        a[i] = calloc(a_col,sizeof(int*));
    }
    b = calloc(b_row,sizeof(int*));
    for (size_t i = 0; i < a_col; i++)
    {
        /* code */
        b[i] = calloc(b_col,sizeof(int*));
    }
    
    printf("ENTER THE ELEMENTS OF MATRIX One :\n");
    for (m = 0; m < a_row; m++){
        for (n = 0; n < a_col; n++){
            printf("a[%d][%d] : ",m,n);
            scanf("%d", &a[m][n]);
            //a[m][n] = a_temp[m][n];
        }
    }
    printf("ENTER THE ELEMENTS OF MATRIX Two :\n");
    for (m = 0; m < b_row; m++){
        for (n = 0; n < b_col; n++){
            printf("b[%d][%d] : ",m,n);
            scanf("%d", &b[m][n]);
            //b[m][n] = b_temp[m][n];
        }
    }
    int opt;
    printf("[0]exit\n[1]addition\n[2]subtraction\n[3]mul\n[4]tran_a\n[5]tran_b\n[6]det a\n[7]det b\n[8]co-factor of a\n[9]co-factor of b\n[10]inverse of a\n[11]inverse of b\n");
    while (1)
    {
        printf("Enter option:");
        scanf("%d",&opt);
        if(opt == 0){
            free(a);
            free(b);
            break;
        }
        else if(opt == 1){
            printf("\nAddition of matrix");
            int **add = add_matrix(a_row,a_col,a,b);
            print_matrix(a_row,a_col, add);
            free(add);
            printf("\n");
            
        }
        else if(opt == 2){
            printf("\nsub of matrix\n");
            int **sub = sub_matrix(a_row,a_col,a,b);
            print_matrix(a_row,a_col, sub);
            free(sub);
            printf("\n");
           
        }
        else if( opt == 3){
            printf("\nmul of matrix\n");
            int **mul = mul_matrix(a_row,b_col,a,b);
            print_matrix(a_row,a_col, mul);
            free(mul);
            printf("\n");
           
        }
        else if(opt == 4){
            printf("\ntran of matrix A\n");
            int **tran_a = tran_matrix(a_row,a_col,a);
            print_matrix(a_row,a_col, tran_a);
            free(tran_a);
            printf("\n");
        }
        else if(opt == 5){
            printf("\ntran of matrix B\n");
            int **tran_b = tran_matrix(b_row,b_col,a);
            print_matrix(a_row,a_col, tran_b);
            free(tran_b);
            printf("\n");
        }
        else if(opt == 6){
            printf("\ndet of matrix A\n");
            if(a_row == a_col){
                printf("%d",det(a_row,a_col,a));
                printf("\n");
            }else{
                printf("det Not possible.\n");
            }
        }
        else if(opt == 7){
            printf("\ndet of matrix B\n");
            if(b_row == b_col){
                printf("%d",det(b_row,b_col,b));
                printf("\n");
            }else{
                printf("det Not possible.\n");
            }
        }
        else if(opt == 8){
            printf("\nco-factor of matrix A\n");
            int ** co_mat = cofactor_matrix(a_row,a_col,a);
            print_matrix(a_row,a_col,co_mat);
            free(co_mat);
            printf("\n");
        }
        else if(opt == 9){
            printf("\nco-factor of matrix B\n");
            int ** co_mat = cofactor_matrix(b_row,b_col,b);
            print_matrix(b_row,b_col,co_mat);
            free(co_mat); 
            printf("\n");
        }
        else if(opt == 10){
            printf("\ninverse of matrix A\n");
            int det_a = det(a_row,a_col,a);
            (float) det_a;
            int ** co_mat = cofactor_matrix(a_row,a_col,a);
            int ** adj_mat = tran_matrix(a_row,a_col,co_mat);
            int ** inverse_matrix = scalar_division(a_row,a_col,adj_mat,det_a);
            print_matrix(a_row,a_col,inverse_matrix);
            free(co_mat);
            free(adj_mat);
            free(inverse_matrix);
            printf("\n");
        }
        else if(opt == 11){
            printf("\ninverse of matrix B\n");
            int det_b = det(b_row,b_col,b);
            (float) det_b;
            int ** co_mat = cofactor_matrix(b_row,b_col,b);
            int ** adj_mat = tran_matrix(b_row,b_col,co_mat);
            int ** inverse_matrix = scalar_division(b_row,b_col,adj_mat,det_b);
            print_matrix(a_row,a_col,inverse_matrix);
            free(co_mat);
            free(adj_mat);
            free(inverse_matrix);
            printf("\n");
        }
        else{
            printf("\n invalid option \n");
        }
    }
    
   
    

    
}