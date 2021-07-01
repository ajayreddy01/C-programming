#include <stdio.h>
int main()
{
	int m, n, c, d, first[10][10], second[10][10], sum[10][10];
	printf("enter the no of rows and columns of the matrix\n");
	scanf("%d%d", &m, &n);
	printf("enter the elements of the first matrix\n");
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			scanf("%d", &first[c][d]);
	printf("enter the elements of the second matrix\n");
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			scanf("%d", &second[c][d]);
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			sum[c][d] = first[c][d] + second[c][d];
	printf("the sum of the matrix is:\n");
	for (c = 0; c < m; c++)
		for (d = 0; d < n; d++)
			printf("%d\t", sum[c][d]);
	printf("\n");
	return 0;
}