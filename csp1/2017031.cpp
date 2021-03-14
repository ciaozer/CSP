#include<stdio.h>
int main()
{
	int n, k, num=0, temp=0, a;
	scanf("%d%d", &n, &k);
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &a);
		temp += a;
		if(temp>=k)
		{
			num++;
			temp = 0;
		}
	}
	if(temp)		
		num++;
	printf("%d", num);
	
	return 0;
}
