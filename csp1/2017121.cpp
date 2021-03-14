#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n, sub;
	scanf("%d", &n);
	int a[n];
	for( int i=0; i<n; i++ )
		scanf("%d", &a[i]);
	sort(a, a+n);
	int min = 10000;
	for( int i=0; i<n-1; i++ )
	{
		sub = a[i+1] - a[i];
		min = sub < min ? sub : min;
	}
	printf("%d", min);
	
	return 0;
}
