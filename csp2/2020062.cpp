#include<stdio.h>
#include<algorithm>
using namespace std;
int recent;
struct Vec{
	int index;
	double value;
};

int cmp(Vec a, Vec b)
{
	return a.index<b.index;
}

double find(Vec* vecb, int size, int index0)
{
	for( int i=recent; i<size; i++ )
	{
		if( vecb[i].index == index0 )
		{
			recent = i;
			return vecb[i].value;
		}
	}
	return 0;
}

int main()
{
	int n, a, b;
	double ans=0, temp;
	scanf("%d%d%d", &n, &a, &b);
	Vec veca[a];
	Vec vecb[b];
	for( int i=0; i<a; i++ )
		scanf("%d%lf", &veca[i].index, &veca[i].value);
	for( int i=0; i<b; i++ )
		scanf("%d%lf", &vecb[i].index, &vecb[i].value);
	sort(veca, veca+a, cmp);
	sort(vecb, vecb+b, cmp);
	for( int i=0; i<a; i++ )
	{
		if( temp = find(vecb, b, veca[i].index) )
		{
			ans += temp*veca[i].value;
		}
	}
	printf("%.0f", ans);
	
	return 0;
}
