//Each new term in the fibonacci sequence is generated by adding the previous two terms.
//By starting with 1 and 2, the first 10 terms will be:
//1,2,3,5,8,13,21,34,55,89,...
//By considering the terms in the fibonacci sequence whose values do not exceed four million, find
//the sum of the even-valued terms

#include <stdio.h>
#define MAX 4000000
static int total;
int fib(int);

int main()
{
	int fibVal=2;
	int prevVal=1;
	int temp;
	int total = 0;
	do
	{
		if((fibVal % 2) == 0)
			total += fibVal;
		temp = fibVal;
		fibVal += prevVal;
		prevVal = temp;
		
	}
	while(fibVal<=MAX);
	printf("%d\n",total);
}

int fib(int val)
{
	if(val==0) return 0;
	if(val == 1) return 1;
	return fib(val-1)+fib(val-2);	
}
