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
	for( int i=0; i<len i++ )			//����������ݣ���ʵ����д�ɺ��� 
	{
		if( format[i] != ':' )
		{
			alpha[numa].zimu = format[i];
			alpha[numa].flag = 0;
			alpha[numa].parameter = 0;
			numa++;						//���ǵڼ�����ĸ 
		}
		else
			alpha[numa].flag = 1;		//�����ĸ�в��� 
	}
	sort(alpha, alpha+numa, cmp);		//��ĸ�������� 
	for( int i=0; i<n; i++ )
	{
		while			//��������� 
	}
}
