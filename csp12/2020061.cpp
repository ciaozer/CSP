#include<stdio.h>
#include<string.h>
int main()
{
	int n, m, temp1, temp2;			//��ĸ�������ѯ��������ʱ��ŵ������
	int ita=0, itb=0;				//a,b�����ָ�� 
	char c;							//��ŵ����� 
	scanf("%d%d", &n, &m);			//��Ͳ�ѯ���� 
	int a[n][2], b[n][2];			//���A��B���
	memset(a, 0, sizeof(a));		//��������0����һ�δ�������
	memset(b, 0, sizeof(b)); 
	for( int i=0; i<n; i++ )		//������ݴ洢 
	{
		scanf("%d%d %c", &temp1, &temp2, &c);	//ע��%cǰ��Ŀո� 
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
	
	int c0, c1, c2;					//ֱ�߲���
	int flag = 0;					//flag=1Ϊ���� 
	for( int i=0; i<m; i++ )
	{
		flag = 0;					//flagҲҪ�ָ����ڶ��δ��� 
		scanf("%d%d%d", &c0, &c1, &c2);
		if( c0 + a[0][0]*c1 + a[0][1]*c2 > 0 )		//A��㶼>0
		{
			for( int j=1; j<ita; j++ )
			{
				if( c0 + a[j][0]*c1 + a[j][1]*c2 < 0 )
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)			//û�����Ҫ��B
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
