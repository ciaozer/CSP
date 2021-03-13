#include<stdio.h>
int main()
{
	int before, after, ans;
	scanf("%d", &after);
	for( before=0; before<300000; before+=100 )
	{
		if( before<=3500 )
			ans = before;
		else if( before<=5000 )
			ans = before-( (before-3500)*3/100 );
		else if( before<=8000 )
			ans = before-( (before-5000)/10 + 45 );
		else if( before<=12500 )
			ans = before-( (before-8000)/5 + 345 );
		else if( before<=38500 )
			ans = before-( (before-12500)/4 + 1245 );
		else if( before<=58500 )
			ans = before-( (before-38500)*3/10 + 7745 );
		else if( before<=83500 )
			ans = before-( (before-58500)*35/100 + 13745 );
		else
			ans = before-( (before-83500)*45/100 + 22495 );
		if(after==ans)
			break;
	}
	
	printf("%d", before);
	return 0;
}
