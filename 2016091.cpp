#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n, last, a, maxsub=0;
	scanf("%d", &n);
	scanf("%d", &a);
	for( int i=1; i<n; i++ )
	{
		last = a;
		scanf("%d",  &a);
		maxsub = max(maxsub, abs(a-last));
	}
	printf("%d", maxsub);
	
	return 0;
}
