#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for( int i=0; i<n; i++ )
		scanf("%d", &a[i]);
	int maxn = max(a[0], a[n-1]);
	int minn = min(a[0], a[n-1]);
	double mid;
	if( n&1 )
		printf("%d %d %d", maxn, a[(n-1)/2], minn);
	else
	{
		if( (a[n/2]+a[n/2-1]) % 2 == 0 )
			printf("%d %d %d", maxn, (a[n/2]+a[n/2-1]) / 2, minn);
		else
			printf("%d %.1f %d", maxn, ((double)a[n/2]+(double)a[n/2-1])/2.0, minn);
	}
	return 0;
}
