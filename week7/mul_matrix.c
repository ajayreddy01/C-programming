#include <stdio.h>
int main()
{
	int m, n, c, p, q, d, k, first[10][10], second[10][10], sum = 0, mul[10][10];
	printf("enter the no of rows and columns of the matrix\n");
	scanf("%d%d", &m, &n);
	printf("enter the elements of the first matrix\n");
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			scanf("%d", &first[c][d]);
	printf("enter the no of rows and columns of second matrix\n");
	scanf("%d%d", &p, &q);
	if (n != p)
		printf("matrix multiplication is not possible\n");
	else
		printf("enter the elements of the second matrix\n");
	for (c = 0; c < p; c++)
		for (d = 0; d < q; d++)
			scanf("%d", &second[c][d]);
	for (c = 0; c < m; c++)
		for (d = 0; d < q; d++)
			for (k = 0; k < p; k++)
				sum = sum + first[c][k] * second[k][d];
	mul[c][d] = sum;
	printf("the product of the matrix is:\n");
	for (c = 0; c < m; c++)
		for (d = 0; d < q; d++)
			printf("%d\t", mul[c][d]);
	printf("\n");
	return 0;
}