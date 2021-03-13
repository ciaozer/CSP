#include<stdio.h>
int n;
struct rubbish{
	int x;
	int y;
	int point;
}rub[1001];

int find(int x0, int y0)
{
	for( int i=0; i<n; i++ )
		if(rub[i].x == x0 && rub[i].y == y0)
			return 1;
	return 0;
}

int main()
{
	int score[5] = {0};
	scanf("%d", &n);
	for( int i=0; i<n; i++ )
	{
		scanf("%d%d", &rub[i].x, &rub[i].y);
		rub[i].point = 0;
	}
	for( int i=0; i<n; i++ )
	{
		if( find(rub[i].x, rub[i].y+1) && find(rub[i].x, rub[i].y-1) && find(rub[i].x+1, rub[i].y) && find(rub[i].x-1, rub[i].y) )
		{
			if( find(rub[i].x+1, rub[i].y+1) )		rub[i].point++;
			if( find(rub[i].x+1, rub[i].y-1) )		rub[i].point++;
			if( find(rub[i].x-1, rub[i].y+1) )		rub[i].point++;
			if( find(rub[i].x-1, rub[i].y-1) )		rub[i].point++;
			if( rub[i].point == 0 )						score[0]++;
			else if( rub[i].point == 1 )				score[1]++;
			else if( rub[i].point == 2 )				score[2]++;
			else if( rub[i].point == 3 )				score[3]++;
			else if( rub[i].point == 4 )				score[4]++;
		}
	}
	for( int i=0; i<5; i++ )
		printf("%d\n", score[i]);
		
	return 0;
}
