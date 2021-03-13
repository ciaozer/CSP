#include<stdio.h>
int a[501][501];
int main()
{
	int n, state=0, x=0, y=0;			//state表示右，左下，下，右上 
	scanf("%d", &n);
	for( int i=0; i<n; i++ )
		for( int j=0; j<n; j++ )
			scanf("%d", &a[i][j]);
	printf("%d ", a[0][0]);
	while(1)
	{
		if(x==n-1 && y==n-1)
			break;
		switch(state)
		{
			case 0:
				{
					x++;
					if( y==n-1 )
						state = 3;
					else
						state = 1;
					break;						//忘加break 
				}
			case 1:
				{
					y++;
					x--;
					if( y==n-1 )				//顺序不能换 
						state = 0;
					else if( x==0 )
						state = 2;
					break;
				}
			case 2:
				{
					y++;
					if( x==n-1 )
						state = 1;
					else
						state = 3;
					break;
				}
			case 3:
				{
					x++;
					y--;
					if( x==n-1 )
						state = 2;
					else if( y==0 )
						state = 0;
					break;
				}
		}
		printf("%d ", a[y][x]);
	}
	
	return 0;
}
