#include<stdio.h>
#include<algorithm>
using namespace std;
struct Point{
	int dist;
	int index;
};
int cmp(Point a, Point b)
{
	if(a.dist!=b.dist)
		return a.dist<b.dist;
	else
		return a.index<b.index;
}

int main()
{
	int n, a, b, x, y;
	scanf("%d%d%d", &n, &a, &b);
	Point point[n];
	for( int i=0; i<n; i++ )
	{
		scanf("%d%d", &x, &y);
		point[i].dist = (x-a)*(x-a)+(y-b)*(y-b);
		point[i].index = i;
	}
	sort(point, point+n, cmp);
	printf("%d\n%d\n%d", point[0].index+1, point[1].index+1, point[2].index+1);
	
	return 0;
}
