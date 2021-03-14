#include<stdio.h>
int main()
{
	int num=1, n, a, last;
	scanf("%d", &n);
	scanf("%d", &a);
	for( int i=0; i<n-1; i++ )
	{
		last = a;
		scanf("%d", &a);
		if( a!=last )
		{
			num++;
		}
	}
	printf("%d", num);
	
	return 0;
}
