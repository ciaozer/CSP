#include<stdio.h>
long long r, y, g, k, t;
long long change(long long ans)			//���뵱ǰʱ�䣬�����ȴ�ʱ��	
{
	if( k==0 )				return t;	//Ϊ�㲻�ñ䣬ֱ�Ӽ�ʱ�� 
	t -= ans;
	if( k==1 )							//���
	{
		while(1)
		{ 
			if( t>=0 )	break;
			t += g;
			k = 3;
			if( t>=0 )	break;
			t += y;
			k = 2;
			if( t>=0 )	break;
			t += r;
			k = 1;
			if( t>=0 )	break;
		}
	}
	else if( k==2 )
	{
		while(1)
		{
			if( t>=0 )	break;
			t += r;
			k = 1;
			if( t>=0 )	break;
			t += g;
			k = 3;
			if( t>=0 )	break;
			t += y;
			k = 2;
			if( t>=0 )	break;
		}
	}
	else
	{
		while(1)
		{
			if( t>=0 )	break;
			t += y;
			k = 2;
			if( t>=0 )	break;
			t += r;
			k = 1;
			if( t>=0 )	break;
			t += g;
			k = 3;
			if( t>=0 )	break;
		}
	}
	if( k==1 )			return t;
	if( k==2 )			return t+r;
	if( k==3 )			return 0;
}

int main()
{
	int n; 
	long long ans=0, T;
	scanf("%lld%lld%lld%d", &r, &y, &g, &n);
	T = r+g+y;
	for( int i=0; i<n; i++ )
	{
		scanf("%lld%lld", &k, &t);
		ans += change( ans%T );
	}
	printf("%lld", ans);
	
	return 0;
}
