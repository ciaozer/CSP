#include<stdio.h>
struct Tree{
	int recent;			//��ǰƻ����
	int fall; 			//����� 
	int drop;			//�Ƿ���� 
};

int main()
{
	int n, m, temp, T=0, D=0, E=0;
	scanf("%d", &n);		//ƻ��������
	Tree tree[n];
	for( int i=0; i<n; i++ )
	{
		tree[i].drop = 0;
		tree[i].fall = 0;
		scanf("%d%d", &m, &tree[i].recent);		//�Ը���������������ʼƻ���� 
		for( int j=0; j<m-1; j++ )
		{
			scanf("%d", &temp);
			if( temp<=0 )			//�������
				tree[i].fall -= temp;
			else					//ͳ������ 
			{
				if( temp != tree[i].recent-tree[i].fall )
					tree[i].drop = 1;
				tree[i].fall = 0;
				tree[i].recent = temp;
			}
		}
	}
	for( int i=0; i<n; i++ )
	{
		T += tree[i].recent-tree[i].fall;
		if( tree[i].drop==1 )
			D++;
	}
	if( tree[n-2].drop == 1 && tree[n-1].drop == 1 && tree[0].drop == 1 )
		E++;
	if( tree[n-1].drop == 1 && tree[0].drop == 1 && tree[1].drop == 1 )
		E++;
	for( int i=0; i<n-2; i++ )
		if( tree[i].drop == 1 && tree[i+1].drop == 1 && tree[i+2].drop == 1 )
			E++;
	printf("%d %d %d", T, D, E);
	
	return 0;
}
