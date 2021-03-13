#include<stdio.h>
int k, xl, yl, xr, yr; 
int stayed(int man[][2], int time)
{
	for( int i=1; i<k; i++ )			//对于后续的k-1个时间 
		if( man[time+i][0] < xl || man[time+i][0] > xr || man[time+i][1] < yl || man[time+i][1] > yr )	//不在区域内 
			return 0;
	return 1;
}

int main()
{
	int n, t, stayflag, passflag, pass=0, stay=0;
	scanf("%d%d%d%d%d%d%d", &n, &k, &t, &xl, &yl, &xr, &yr);
	int man[n][t][2];			//n个人，t个时间，位置 
	for( int people=0; people<n; people++ )
		for( int time=0; time<t; time++ )
			scanf("%d%d", &man[people][time][0], &man[people][time][1]);
	for( int people=0; people<n; people++ )
	{
		stayflag = 0;								//这个人是否经过  
		passflag = 0;								//这个人是否停留 
		for( int time=0; time<t; time++ )
		{
			if( man[people][time][0] >= xl && man[people][time][0] <= xr && man[people][time][1] >= yl && man[people][time][1] <= yr )
			{//这个点满足在区域内，接下来看后续的k-1个点是否满足 
				passflag = 1;
				if( stayed( man[people], time ) )
				{
					stayflag = 1;
					break;
				}
			}
		}
		if( passflag == 1 )			pass++;
		if( stayflag == 1 )			stay++;
	}
	printf("%d\n%d", pass, stay);
	
	return 0;
}
