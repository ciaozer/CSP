#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int tree[n], fall[n]={0};			//ƻ�������߹����� 
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &tree[i]);
		for( int j=0; j<m; j++ )
		{
			int temp;					//��ʱ��������
			scanf("%d", &temp);
			fall[i] -= temp;			//�Ѹ�������Ϊÿ������������� 
		}
	}
	int t=0, k=1, p;
	for( int i=0; i<n; i++ )
		t = t + tree[i] - fall[i];
	int max = fall[0];
	for( int i=1; i<n; i++ )
	{
		if( fall[i] > max)
		{
			max = fall[i];
			k = i+1;
		}
	}
	p = max;							//�������� 
	printf("%d %d %d", t, k, p);
	
	return 0;
}
