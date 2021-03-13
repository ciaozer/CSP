#include<stdio.h>
int pos[20][5];
int findrow(int num, int row)				//��row���Ƿ�������num 
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
			return i;						//�ҵ������е�λ�ò����� 
	} 
	return -1;								//û�ҵ� 
}

int* find(int num, int* p)							//�ҵ�����Ҫ�����С��
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
		scanf("%d", &num[i]);					//�洢ÿ������
		find(num[i], p);
		if(ans[1]==-1)						//��λ������
		{
			int left = num[i];
			while(left)						//Ѱ��ʣ�µĿ�λ
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
