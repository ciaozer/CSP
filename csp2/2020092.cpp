#include<stdio.h>
int k, xl, yl, xr, yr; 
int stayed(int man[][2], int time)
{
	for( int i=1; i<k; i++ )			//���ں�����k-1��ʱ�� 
		if( man[time+i][0] < xl || man[time+i][0] > xr || man[time+i][1] < yl || man[time+i][1] > yr )	//���������� 
			return 0;
	return 1;
}

int main()
{
	int n, t, stayflag, passflag, pass=0, stay=0;
	scanf("%d%d%d%d%d%d%d", &n, &k, &t, &xl, &yl, &xr, &yr);
	int man[n][t][2];			//n���ˣ�t��ʱ�䣬λ�� 
	for( int people=0; people<n; people++ )
		for( int time=0; time<t; time++ )
			scanf("%d%d", &man[people][time][0], &man[people][time][1]);
	for( int people=0; people<n; people++ )
	{
		stayflag = 0;								//������Ƿ񾭹�  
		passflag = 0;								//������Ƿ�ͣ�� 
		for( int time=0; time<t; time++ )
		{
			if( man[people][time][0] >= xl && man[people][time][0] <= xr && man[people][time][1] >= yl && man[people][time][1] <= yr )
			{//����������������ڣ���������������k-1�����Ƿ����� 
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
