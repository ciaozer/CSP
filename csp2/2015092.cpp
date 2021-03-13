#include<stdio.h>
int runnian(int year)
{
	if(year%4==0 && year%100!=0)
		return 1;
	if(year%400==0)
		return 1;
	return 0;
}

int main()
{
	int year, days, month=0;
	scanf("%d%d", &year, &days);
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if( runnian(year) )
	{
		for( int i=0; i<12; i++ )
		{
			if( days<=b[i] )
			{
				month++;
				break;
			}
			days -= b[i];
			month++;
		}
	}
	else
	{
		for( int i=0; i<12; i++ )
		{
			if( days<=a[i] )
			{
				month++;
				break;
			}
			days -= a[i];
			month++;
		}
	}
	printf("%d\n%d", month, days);
	
	return 0;
} 
