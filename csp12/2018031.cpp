#include<stdio.h>
int main()
{
	int a=1, point=0, cnt=1, last;
	while(1)
	{
		last = a;
		scanf("%d", &a);
		if(!a)		break;
		if( a == 1 )
			point++;
		else
		{
			if(last==2)
			{
				cnt += 1;
				point += cnt*2;
			}
			else
			{
				cnt = 1;
				point += 2;
			}
		}
	}
	printf("%d", point);
	
	return 0;
}
