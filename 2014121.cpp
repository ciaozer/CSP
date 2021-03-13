#include<stdio.h>
int a[1001];

int main()
{
	int n, temp;
	scanf("%d", &n);
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &temp);
		a[temp]++;
		printf("%d ", a[temp]);
	}
	
	return 0;
}
