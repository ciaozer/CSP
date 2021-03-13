#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n, m, a, b;
	vector<int> stu;
	vector<int>::iterator it;
	scanf("%d%d", &n, &m);
	for( int i=1; i<=n; i++ )
		stu.push_back(i);
	for( int i=0; i<m; i++ )
	{
		scanf("%d%d", &a, &b);
		it = find(stu.begin(), stu.end(), a);
		stu.erase(it);
		stu.insert(it+b, a);
	}
	for( int i=0; i<n; i++ )
		printf("%d ", stu[i]);
		
	return 0;
}
