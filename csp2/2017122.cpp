#include<stdio.h>
#include<vector>
using namespace std;
int out(int num, int k)
{
	if(num%10 == k)
		return 1;
	if(num%k == 0)
		return 1;
	return 0;
}

int main()
{
	int n, k, num=1;
	scanf("%d%d", &n, &k);
	vector<int> a;
	for( int i=0; i<n; i++ )
		a.push_back(i+1);
	vector<int>::iterator it = a.begin();
	while(a.size()>1)
	{
		if( it == a.end() )
			it = a.begin();
		if( out(num, k) )
		{
			a.erase(it);
			it--;				//erase完了自动指向下一个 
		}
		it++;
		num++;
	}
	printf("%d", a[0]);
	
	return 0;
}
