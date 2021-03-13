#include<stdio.h>
int a[101][101];
int main()
{
	int n, num=0, e, b, c, d;
	scanf("%d", &n);
	for( int i=0; i<n; i++ )
	{
		scanf("%d%d%d%d", &e, &b, &c, &d);
		for( int j=e; j<c; j++ )
			for(int k=b; k<d; k++ )
				a[j][k] = 1;
	}
	for( int i=0; i<101; i++ )
		for( int j=0; j<101; j++ )
			if(a[i][j] == 1)
				num++;
	printf("%d", num);
	
	return 0;
}
