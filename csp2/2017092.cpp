#include<stdio.h>
#include<algorithm>
using namespace std;
struct Borrow{
	int begin;
	int last;
	int end;
	int num;
};

int cmp1(Borrow a, Borrow b)
{
	return a.num<b.num;
}

int cmp2(Borrow a, Borrow b)
{
	return a.end>b.end;
}

int main()
{
	int n, k, endmax;
	scanf("%d%d", &n, &k);
	int key[n];
	for( int i=0; i<n; i++ )
		key[i] = i+1;
	Borrow borrow[k];
	for( int i=0; i<k; i++ )
	{
		scanf("%d%d%d", &borrow[i].num, &borrow[i].begin, &borrow[i].last);
		borrow[i].end = borrow[i].begin + borrow[i].last; 
	}
	sort(borrow, borrow+k, cmp2);
	endmax = borrow[0].end;					//�������ʱ��
	sort(borrow, borrow+k, cmp1);
	for( int time=1; time<=endmax; time++ )	//��ĳһ��ʱ��� 
	{
		for( int end=0; end<k; end++ )		//�黹Կ��
		{
			if(borrow[end].end == time)		//�����ʦҪ��
			{
				for( int i=0; i<n; i++ )	//�ҵ���һ����Կ��
				{
					if(key[i]==0)
					{
						key[i]=borrow[end].num;
						break;				//���ǽ����ˣ���һֱ�����п�ռ�� 
					}
				}
			}
		}
		for( int begin=0; begin<k; begin++ )	//��Կ��
		{
			if(borrow[begin].begin == time)	//�����ʦҪ��
			{
				for( int i=0; i<n; i++ )
				{
					if(key[i]==borrow[begin].num)
					{
						key[i] = 0;
						break;
					}
				}
			}
		}
	}
	for( int i=0; i<n; i++ )
		printf("%d ", key[i]);

	return 0;
}
 
