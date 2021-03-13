#include<stdio.h>
int n;
int maxheight(int i, int *height)
{
	int sum=0;
	for( int index=i; index<n; index++ )
	{
		if( height[index] >= height[i] )			//后面的比要比的高 
			sum += height[i]; 
		else				break;
	}
	for( int index=i; index>=0; index-- )
	{
		if( height[index] >= height[i] )			//前面的比要比高 
			sum += height[i];
		else 				break;
	}
	sum -= height[i];								//算了两次 
	return sum;
}

int main()
{
	int max=0, temp;
	scanf("%d", &n);
	int height[n];
	for( int i=0; i<n; i++ )
		scanf("%d", &height[i]);
	for( int i=0; i<n; i++ )
	{
		temp = maxheight(i, height);
		max = temp>max ? temp : max;
	}
	printf("%d", max);
	
	return 0;
}
