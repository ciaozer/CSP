#include<stdio.h>
#include<algorithm>
using namespace std;
struct times{
	int num;
	int cnt;
	times()
	{
		cnt = 0;
	}
}a[1001];

int cmp(times a1, times a2)
{
	if(a1.cnt != a2.cnt)
		return a1.cnt>a2.cnt;
	else
		return a1.num<a2.num;
}

int main()
{
	int n, temp;
	scanf("%d", &n);
	for( int i=0; i<1001; i++ )				//第一遍做没有这个，在下面n循环初始化，会出现问题 
		a[i].num = i;
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &temp);
		a[temp].cnt++;
	}
	sort(a, a+1001, cmp);
	for( int i=0; i<1001; i++ )
	{
		if(a[i].cnt == 0)
			break;
		printf("%d %d\n", a[i].num, a[i].cnt);
	}
	
	return 0;
}
