#include<stdio.h>
#include<string.h>
int main()
{
	int n, m, temp1, temp2;			//点的个数，查询次数，临时存放点的坐标
	int ita=0, itb=0;				//a,b数组的指针 
	char c;							//存放点的类别 
	scanf("%d%d", &n, &m);			//点和查询个数 
	int a[n][2], b[n][2];			//存放A，B类点
	memset(a, 0, sizeof(a));		//别忘了置0，第一次错在这里
	memset(b, 0, sizeof(b)); 
	for( int i=0; i<n; i++ )		//完成数据存储 
	{
		scanf("%d%d %c", &temp1, &temp2, &c);	//注意%c前面的空格 
		if( c == 'A' )
		{
			a[ita][0] = temp1;
			a[ita][1] = temp2;
			ita++;
		}
		else
		{
			b[itb][0] = temp1;
			b[itb][1] = temp2;
			itb++;
		}
	}
	
	int c0, c1, c2;					//直线参数
	int flag = 0;					//flag=1为错误 
	for( int i=0; i<m; i++ )
	{
		flag = 0;					//flag也要恢复，第二次错误 
		scanf("%d%d%d", &c0, &c1, &c2);
		if( c0 + a[0][0]*c1 + a[0][1]*c2 > 0 )		//A类点都>0
		{
			for( int j=1; j<ita; j++ )
			{
				if( c0 + a[j][0]*c1 + a[j][1]*c2 < 0 )
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)			//没错才需要看B
				for( int j=0; j<itb; j++ )
				{
					if( c0 + b[j][0]*c1 + b[j][1]*c2 > 0 )
					{
						flag = 1;
						break;
					}
				} 
		}
		else
		{
			for( int j=1; j<ita; j++ )
			{
				if( c0 + a[j][0]*c1 + a[j][1]*c2 > 0 )
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)			
				for( int j=0; j<itb; j++ )
				{
					if( c0 + b[j][0]*c1 + b[j][1]*c2 < 0 )
					{
						flag = 1;
						break;
					}
				}
		}
		if( flag == 0 )
			printf("Yes\n");
		else
			printf("No\n"); 
	}
	
	return 0;
}
