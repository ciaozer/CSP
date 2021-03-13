#include<stdio.h>
struct pos{
	int value;
	int flag;
};
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	pos a[n][m];
	for( int i=0; i<n; i++ )
		for( int j=0; j<m; j++ )
		{
			scanf("%d", &a[i][j].value);
			a[i][j].flag = 0;
		}
	for( int i=0; i<n; i++ )
		for( int j=0; j<m; j++ )
		{
			if(j<m-2)
				if(a[i][j].value == a[i][j+1].value && a[i][j].value == a[i][j+2].value)
				{
					a[i][j].flag = 1;
					a[i][j+1].flag = 1;
					a[i][j+2].flag = 1;
				}
			if(i<n-2)
				if(a[i][j].value == a[i+1][j].value && a[i][j].value == a[i+2][j].value)
				{
					a[i][j].flag = 1;
					a[i+1][j].flag = 1;
					a[i+2][j].flag = 1;
				}
		}
	for( int i=0; i<n; i++ )
	{
		for( int j=0; j<m; j++ )
		{
			if(a[i][j].flag == 1)
				printf("0 ");
			else
				printf("%d ", a[i][j].value);
		}
		printf("\n");
	}
	
	return 0;
}
