#include<stdio.h>
int main()
{
	int bottle=0, money, temp1, temp2;
	scanf("%d", &money);
	money /= 10;
	temp1 = money/5;
	temp2 = money%5;
	bottle = money + temp1*2;
	temp1 = temp2/3;
	bottle += temp1;
	printf("%d", bottle);
	
	return 0;
}
