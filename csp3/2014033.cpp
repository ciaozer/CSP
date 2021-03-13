#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char format[55];
struct alphabet{
	char zimu;
	int flag;
	int parameter;
}alpha[26]; 

int cmp(alphabet a, alphabet b)
{
	return a.zimu<b.zimu;
}

int main()
{
	int n, len, numa=0;
	scanf("%s%d", format, &n);
	len = strlen(format);
	for( int i=0; i<len i++ )			//处理读入数据，其实可以写成函数 
	{
		if( format[i] != ':' )
		{
			alpha[numa].zimu = format[i];
			alpha[numa].flag = 0;
			alpha[numa].parameter = 0;
			numa++;						//这是第几个字母 
		}
		else
			alpha[numa].flag = 1;		//这个字母有参数 
	}
	sort(alpha, alpha+numa, cmp);		//字母升序排列 
	for( int i=0; i<n; i++ )
	{
		while			//不会读数据 
	}
}
