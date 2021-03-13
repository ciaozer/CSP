#include<stdio.h>
int a[1001][1001];						//大数组在外部声明 
int main()
{
	int n, m, i, j;
	scanf("%d%d", &n, &m);
	for( i=0; i<n; i++ )
		for( j=0; j<m; j++ )
			scanf("%d", &a[i][j]);
	for( i=m-1; i>=0; i-- )
	{
		for( j=0; j<n; j++ )
			printf("%d ", a[j][i]);
		printf("\n");
	}
			
	return 0;
}
