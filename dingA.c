#include<stdio.h>

int fib(n)
{
	return ( n ==  1 || n == 2) ? 1 : fib( n - 1 ) + fib( n - 2 );
}

int main()
{
	int a,ans;
	while(scanf("%d",&a) != EOF)
	{
		if( a < 1 )
			printf("error");
		else
		{
			ans = fib(a);
			printf("%d ",  ans);
		}
	}
	return 0;
}
