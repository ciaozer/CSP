#include<stdio.h>
int have7(int n)
{
	while(n)
	{
		if(	n%10 == 7 )
			return 1;
		n /= 10;
	}
	return 0;
}
int main()
{
	int num, cnt=1;
	int a[4] = {0};
	scanf("%d", &num);
	while(cnt <= num)
	{
		if(cnt%7==0 || have7(cnt))
		{
			num++;
			a[(cnt-1)%4]++;
		}
		cnt++;
	}
	for( int i=0; i<4; i++ )
		printf("%d\n", a[i]);
	return 0;
}
