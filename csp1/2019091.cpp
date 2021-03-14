#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int tree[n], fall[n]={0};			//苹果树和蔬果个数 
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &tree[i]);
		for( int j=0; j<m; j++ )
		{
			int temp;					//临时存放疏果数
			scanf("%d", &temp);
			fall[i] -= temp;			//把负变正，为每棵树的总疏果数 
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
	p = max;							//换个名字 
	printf("%d %d %d", t, k, p);
	
	return 0;
}
