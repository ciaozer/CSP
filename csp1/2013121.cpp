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
}t[10001];

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
	for( int i=0; i<10001; i++ )
		t[i].num = i;
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &temp);
		t[temp].cnt++;
	}
	sort(t, t+10001, cmp);
	printf("%d", t[0].num);

	return 0;
}
