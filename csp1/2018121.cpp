#include<stdio.h>
int main()
{
	int r, y, g, n, k, temp, time=0;
	scanf("%d%d%d%d", &r, &y, &g, &n);
	for( int i=0; i<n; i++ )
	{
		scanf("%d%d", &k, &temp);
		if( k == 0 )
			time += temp;
		else if( k == 1 )
			time += temp;
		else if( k == 2 )
			time = time + temp + r;
		else
			time += 0; 
	}
	printf("%d", time);
	
	return 0;
}
