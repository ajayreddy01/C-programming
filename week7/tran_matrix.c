#include <stdio.h>
int main()
{
	int m, n, c, d, matrix[10][10], transpose[10][10];
	printf("enter the no of rows and columns of the matrix\n");
	scanf("%d%d", &m, &n);
	printf("enter the elements of the first matrix\n");
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			scanf("%d", &matrix[c][d]);
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			transpose[d][c] = matrix[c][d];
	for (c = 0; c < n; c++)
		for (d = 0; d < n; d++)
			printf("transpose of the given matrix is\n");
	printf("%d\t", transpose[d][c]);
}