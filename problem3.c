#include <stdio.h>
#include <math.h>
#define VALUE 600851475143
//#define VALUE 13195

int isPrime(int);
int isDecimal(double);
int main()
{
	unsigned long long i;
	unsigned long long answer=0;
	unsigned long long value = VALUE;

	for(i=3;i<=VALUE;i += 2)
	{
		if(isPrime(i) && i<value)
		{
			if(!isDecimal((double)value/i))
			{
				value = value/i;
			}
		}
		if(i>=value)
		{
			answer = i;
			break;
		}
	}	
	printf("%lld\n",answer);

	return 0;
}

int isPrime(int n)
{
	float i;
	for(i=2;i<=n/2;++i)
	{
		if(!isDecimal((float)n/i))
			return 0;
	}
	return 1;
}

int isDecimal(double n)
{
	if(floor(n)==n)
		return 0;
	return 1;
}
