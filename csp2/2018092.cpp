#include<stdio.h>
int a[1000002];
int b[1000002];
int main()
{
	int begin, end, time=0, n;
	scanf("%d", &n);
	for( int i=0; i<n; i++ )
	{
		scanf("%d%d", &begin, &end);
		for( int j=begin; j<end; j++ )
			a[j] = 1;
	}
	for( int i=0; i<n; i++ )
	{
		scanf("%d%d", &begin, &end);
		for( int j=begin; j<end; j++ )
			b[j] = 1;
	}
	for( int i=0; i<1000002; i++ )
		if(a[i]==1 && b[i]==1)
			time++;
	printf("%d", time);
	
	return 0; 
}
