#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	int n, m, x, y, temp, flag;
	scanf("%d%d", &n, &m);
	int pos[n][4];				//���ڶ��� 
	vector<int> order;
	for( int i=0; i<n; i++ )
	{
		scanf("%d%d%d%d", &pos[i][0], &pos[i][1], &pos[i][2], &pos[i][3]);
		order.push_back(i);							//β��Ϊ���Ĵ��� 
	}
	for( int i=0; i<m; i++ )
	{
		flag = 0;
		scanf("%d%d", &x, &y);
		for( int j=n-1; j>=0; j-- )
		{
			temp = order[j];						//�۲�ô��ı�� 
			if( x>=pos[temp][0] && x<=pos[temp][2] && y>=pos[temp][1] && y<=pos[temp][3])
			{
				order.erase(order.begin()+j);
				printf("%d\n", temp+1);
				order.push_back(temp);
				flag = 1;
				break;
			}
		}
		if(flag==0)
			printf("IGNORED\n");
	}
	
	return 0;
}
