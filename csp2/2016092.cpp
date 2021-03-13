#include<stdio.h>
int pos[20][5];
int findrow(int num, int row)				//第row行是否能容纳num 
{
	int i, j;
	for( i=0; i<=5-num; i++ )
	{
		for( j=0; j<num; j++ )
		{
			if(pos[row][i+j] != 0)
				break;
		}
		if( j==num && pos[row][i+j-1] == 0 )
			return i;						//找到行中列的位置并返回 
	} 
	return -1;								//没找到 
}

int* find(int num, int* p)							//找到满足要求的最小行
{
	int i, row=-1;
	for( i=0; i<20; i++ )
	{
		if( findrow(num, i) != -1 )
		{
			row = findrow(num, i);
			break;
		}
	}
	*p = i;
	*(p+1) = row;
	return p;
} 

int main()
{
	int n, *p, begin, flag;
	int ans[2];
	p = ans;
	scanf("%d", &n);
	int num[n];
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &num[i]);					//存储每次需求
		find(num[i], p);
		if(ans[1]==-1)						//座位被排满
		{
			int left = num[i];
			while(left)						//寻找剩下的空位
			{
				flag = 0;
				for( int y=0; y<20; y++ )
				{
					for( int x=0; x<5; x++ )
					{
						if(pos[y][x] == 0)
						{
							pos[y][x] = 1;
							printf("%d ", 5*y+x+1);
							left--;
							flag = 1;
							break;
						}
					}
					if(flag == 1)
						break;
				}
			} 
		} 
		else
		{
			begin = 5*ans[0]+ans[1]+1;
			for( int j=0; j<num[i]; j++ )
			{
				pos[ans[0]][ans[1]+j] = 1;
				printf("%d ", begin+j);
			}
		}
		printf("\n");
	}
	
	return 0;
}
