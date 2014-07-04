//Alternative algorithms http://projecteuler.net/thread=1
#define REG
#undef REG
#define MAX 1000
#include <stdio.h>

unsigned int rayFil(int);
unsigned int arithmeticProgression(int);
int main()
{
	printf("rayFils way\n");
	printf("%u\n",rayFil(MAX));
	printf("progression\n");
	printf("%u\n",arithmeticProgression(MAX));

}

unsigned int rayFil(int max)
{

	#ifdef REG
	register 
	#endif
	int start;
	#ifdef REG
	register 
	#endif
	unsigned int answer = 0;
	for(start=3;start<max;start+=3)
		answer += start;
	for(start=5;start<max;start+=15)
		answer += start;
	for(start=10;start<max;start+=15)
		answer += start;
	return answer;
}

unsigned int arithmeticProgression(int max)
{
	unsigned int sumVal(int, int);
	int LCD = 1; //lowest common dinominator
	unsigned int val1 = sumVal(3,max);
	unsigned int val2 = sumVal(5,max);
	unsigned int val3 = sumVal((3*LCD)*(5*LCD),max);
	return val1+val2-val3;
}

unsigned int sumVal(int d, int n)
{
	//return 0.5*(2*a1+d*(n-1))*n;
	unsigned int p = n/d;
	return d*(p*(p+1))/2;
}
