#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n, left, right, i;
	scanf("%d", &n);
	int a[n];
	for( int i=0; i<n; i++ )
		scanf("%d", &a[i]);
	sort(a, a+n);
	for( i=0; i<n; i++ )
	{
		if( i!=0 && a[i] == a[i-1] )
			continue;
		left = i;
		right = upper_bound(a, a+n, a[i]) - a;
		right = n - right;
		if(left == right)
		{
			printf("%d", a[i]);
			break;
		}
	}
	if( i==n )
		printf("-1");
		
	return 0;
}
