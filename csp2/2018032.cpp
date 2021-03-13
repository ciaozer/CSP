#include<stdio.h>
#include<algorithm>
using namespace std;
struct Ball{
	int pos;
	int v;
	int index;
};

int cmp1(Ball a, Ball b)
{
	return a.pos<b.pos;
}

int cmp2(Ball a, Ball b)
{
	return a.index<b.index;
}

int main()
{
	int n, l, time;
	scanf("%d%d%d", &n, &l, &time);
	Ball ball[n];
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &ball[i].pos);
		ball[i].v = 1;
		ball[i].index = i;
	}
	sort(ball, ball+n, cmp1);
	for( int t=0; t<time; t++ )
	{
		for( int i=0; i<n; i++ )			//每个小球运动一步 
		{
			ball[i].pos += ball[i].v;
		}
		if(ball[0].pos == 0)				//只有它能到0 
			ball[0].v = 1;
		if(ball[n-1].pos == l)
			ball[n-1].v =-1;
		for( int i=0; i<n-1; i++ )			//运动完了再变速
		{
			if( ball[i].pos == ball[i+1].pos )
			{
				ball[i].v = -ball[i].v;
				ball[i+1].v = -ball[i+1].v;
			}
		} 
	}
	sort(ball, ball+n, cmp2);
	for( int i=0; i<n; i++ )
		printf("%d ", ball[i].pos);
	
	return 0;
}
