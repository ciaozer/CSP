#include<stdio.h>
int main()
{
	char str[15], test;
	scanf("%s", str);
	int sum=0;
	sum += 1*(str[0]-'0');
	sum += 2*(str[2]-'0');
	sum += 3*(str[3]-'0');
	sum += 4*(str[4]-'0');
	sum += 5*(str[6]-'0');
	sum += 6*(str[7]-'0');
	sum += 7*(str[8]-'0');
	sum += 8*(str[9]-'0');
	sum += 9*(str[10]-'0');
	sum %= 11;
	if(str[12] == 'X')
		test = 10;
	else
		test = str[12] - '0';
	if( sum == test )
		printf("Right");
	else
	{
		if(sum == 10)
			test = 'X';
		else
			test = sum+'0';
		str[12] = test;
		printf("%s", str);
	}
	
	return 0;
}
