#include<stdio.h>
int a[20][10];
int b[4][4];
int main()
{
	int c, line=3;
	for( int i=0; i<15; i++ )
		for(int j=0; j<10; j++ )
			scanf("%d", &a[i][j]);
	for( int i=0; i<4; i++ )
		for( int j=0; j<4; j++ )
			scanf("%d", &b[i][j]);
	scanf("%d", &c);
	for( int i=0; i<10; i++ )
		a[15][i] = 1;
	while(1)
	{
		if(a[line+1][c-1] == 1 && b[3][0] == 1)
			break;
		if(a[line+1][c+0] == 1 && b[3][1] == 1)
			break;
		if(a[line+1][c+1] == 1 && b[3][2] == 1)
			break;
		if(a[line+1][c+2] == 1 && b[3][3] == 1)
			break;
		if(a[line+0][c-1] == 1 && b[2][0] == 1)
			break;
		if(a[line+0][c+0] == 1 && b[2][1] == 1)
			break;
		if(a[line+0][c+1] == 1 && b[2][2] == 1)
			break;
		if(a[line+0][c+2] == 1 && b[2][3] == 1)
			break;
		if(a[line-1][c-1] == 1 && b[1][0] == 1)
			break;
		if(a[line-1][c+0] == 1 && b[1][1] == 1)
			break;
		if(a[line-1][c+1] == 1 && b[1][2] == 1)
			break;
		if(a[line-1][c+2] == 1 && b[1][3] == 1)
			break;
		if(a[line-2][c-1] == 1 && b[0][0] == 1)
			break;
		if(a[line-2][c+0] == 1 && b[0][1] == 1)
			break;
		if(a[line-2][c+1] == 1 && b[0][2] == 1)
			break;
		if(a[line-2][c+2] == 1 && b[0][3] == 1)
			break;
		line++;
	}
	for( int i=0; i<4; i++ )
		for( int j=0; j<4; j++ )
			a[i+line-3][j+c-1] |= b[i][j];
	for( int i=0; i<15; i++ )
	{
		for(int j=0; j<10; j++ )
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
